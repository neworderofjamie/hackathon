cmake_minimum_required(VERSION 3.1)
include($ENV{BOB_ROBOTICS_PATH}/cmake/bob_robotics.cmake)
BoB_project(SOURCES simulation.cc
            GAZEBO_PLUGIN differential_drive_plugin.cc
            BOB_MODULES common hid robots video)
