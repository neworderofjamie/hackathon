// BoB robotics includes
#include "common/main.h"
#include "common/logging.h"
#include "gazebo/node.h"
#include "hid/joystick.h"
#include "robots/simulated_tank.h"
#include "robots/gazebo/tank.h"
#include "video/gazebocamerainput.h"

// SpineML simulator includes
#include "spineml/simulator/simulator.h"

// Third-party includes
#include "third_party/units.h"

// Standard C++ includes
#include <chrono>
#include <iostream>
#include <thread>
#include <cstring>

using namespace BoBRobotics;
using namespace std::literals;
using namespace units::literals;
using namespace BoBRobotics::Video;

int bob_main(int, char **)
{
    // Camera resolution - matches robot camera
    const cv::Size cameraResolution(152, 72);

    // How much bigger to show camera image on screen
    const int displayScale = 4;

    // How much SMALLER to make image that goes into network
    const int inputScale = 4;

    // Calculate number of pixels each channel will communicate
    const int numInputPixels = (cameraResolution.width / inputScale) * (cameraResolution.height / inputScale);

    /************************************Gazebo setup************/

    // Create our node for publishing joystick values
    gazebo::transport::NodePtr node = Gazebo::getNode();

    /************************************Gazebo setup end************/
    auto cam = std::make_unique<GazeboCameraInput>(
        node, "/gazebo/default/differential_drive_robot/panoramic_camera/link/camera/image", true);

    auto unwrapper = cam->createUnwrapper(cameraResolution);

    Robots::Gazebo::Tank robot(5_rad_per_s, node); // Tank agent
    HID::Joystick joystick(0.25f);

    std::cout << "Drive the car using the two thumbsticks: each stick is for one motor" << std::endl;

    // Create window to show camera image
    cv::namedWindow("Camera", cv::WINDOW_NORMAL);
    cv::resizeWindow("Camera", cameraResolution.width * displayScale,
                     cameraResolution.height * displayScale);


    // Create SpineML simulator object
    SpineMLSimulator::Simulator simulator("experiment0.xml", ".");

    // Get external loggers used for accessing steering signals generated by network
    const auto *steerLeft = simulator.getExternalLogger("steer_left");
    const auto *steerRight = simulator.getExternalLogger("steer_right");
    if(steerLeft) {
        BOB_ASSERT(steerLeft->getModelPropertySize() == 1);
        std::cout << "Steer left output found!" << std::endl;
    }
    if(steerRight) {
        BOB_ASSERT(steerRight->getModelPropertySize() == 1);
        std::cout << "Steer right output found!" << std::endl;
    }


    // Get external inputs used for providing sensor input to the network
    auto *cameraRed = simulator.getExternalInput("camera_red");
    if(cameraRed) {
        BOB_ASSERT(std::distance(cameraRed->getBufferBegin(), cameraRed->getBufferEnd()) == numInputPixels);
        std::cout << "Camera red input found!" << std::endl;
    }

    cv::Mat frame;
    cv::Mat frameUnwrapped;
    cv::Mat frameUnwrappedChannels[3];
    cv::Mat frameUnwrappedChannelsDownsampled[3];
    do
    {
        // Poll joystick
        joystick.update();

        // Read frame
        cam->readFrame(frame);

        // Unwrap
        unwrapper.unwrap(frame, frameUnwrapped);

        // **HACK** horizontally flip camera image
        cv::flip(frameUnwrapped, frameUnwrapped, 1);

        // Show unwrapped frame
        cv::imshow("Camera", frameUnwrapped);

        // Split channels
        cv::split(frameUnwrapped, frameUnwrappedChannels);

        // Downsample each channel
        for(unsigned int c = 0; c < 3; c++) {
            cv::resize(frameUnwrappedChannels[c], frameUnwrappedChannelsDownsampled[c],
                    cv::Size(cameraResolution.width / inputScale, cameraResolution.height / inputScale));
        }

        // If red camera is found, transform pixels to double and inject
        if(cameraRed) {
            std::transform(frameUnwrappedChannelsDownsampled[0].begin<uint8_t>(), frameUnwrappedChannelsDownsampled[0].end<uint8_t>(),
                           cameraRed->getBufferBegin(), [](uint8_t pixel){ return (double)pixel / 255.0; });
        }

        // Advance SpineML simulation
        simulator.stepTime();

        if(steerLeft) {
            std::cout << *steerLeft->getStateVarBegin() << ",";
        }
        if(steerRight) {
            std::cout << *steerRight->getStateVarBegin();
        }
        std::cout << std::endl;
        // Drive robot with joystik
        robot.drive(joystick);

        // Pump OpenCV events
        cv::waitKey(1);
    } while (!joystick.isPressed(HID::JButton::B));

    // Make sure to shut everything down.
    Gazebo::shutDown();
    std::cout <<"Shutting down...\n";

    return EXIT_SUCCESS;
}
