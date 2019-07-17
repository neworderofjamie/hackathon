// BoB robotics includes
#include "common/main.h"
#include "common/logging.h"
#include "gazebo/node.h"
#include "hid/joystick.h"
#include "robots/simulated_tank.h"
#include "robots/gazebo/tank.h"
#include "video/gazebocamerainput.h"
#include "video/display.h"

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

int
bob_main(int argc, char **argv)
{
    /************************************Gazebo setup************/

    // Create our node for publishing joystick values
    gazebo::transport::NodePtr node = Gazebo::getNode();

    /************************************Gazebo setup end************/
    auto cam = std::make_unique<GazeboCameraInput>(
        node, "/gazebo/default/differential_drive_robot/panoramic_camera/link/camera/image", true);
    auto display = std::make_unique<Display>(*cam, cv::Size(152, 72)); //unwrap resolution needs to be supplied
    display->runInBackground();

    Robots::Gazebo::Tank robot(5_rad_per_s, node); // Tank agent
    HID::Joystick joystick(0.25f);

    std::cout << "Drive the car using the two thumbsticks: each stick is for one motor" << std::endl;

    do {
        // Check for joystick events
        if (!joystick.update()) {
            // A small delay so we don't hog CPU
            std::this_thread::sleep_for(5ms);
        }

        robot.drive(joystick);
    } while (!joystick.isPressed(HID::JButton::B));

    // Make sure to shut everything down.
    display->close();
    Gazebo::shutDown();
    std::cout <<"Shutting down...\n";

    return EXIT_SUCCESS;
}
