# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/comrobot8/hackathon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/comrobot8/hackathon/build

# Include any dependencies generated for this target.
include BoB/modules/robots/CMakeFiles/bob_robots.dir/depend.make

# Include the progress variables for this target.
include BoB/modules/robots/CMakeFiles/bob_robots.dir/progress.make

# Include the compile flags for this target's objects.
include BoB/modules/robots/CMakeFiles/bob_robots.dir/flags.make

BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o: BoB/modules/robots/CMakeFiles/bob_robots.dir/flags.make
BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o: /home/comrobot8/bob_robotics/src/robots/mecanum.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_robots.dir/mecanum.cc.o -c /home/comrobot8/bob_robotics/src/robots/mecanum.cc

BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_robots.dir/mecanum.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/robots/mecanum.cc > CMakeFiles/bob_robots.dir/mecanum.cc.i

BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_robots.dir/mecanum.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/robots/mecanum.cc -o CMakeFiles/bob_robots.dir/mecanum.cc.s

BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o.requires:

.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o.requires

BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o.provides: BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o.requires
	$(MAKE) -f BoB/modules/robots/CMakeFiles/bob_robots.dir/build.make BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o.provides.build
.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o.provides

BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o.provides.build: BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o


BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o: BoB/modules/robots/CMakeFiles/bob_robots.dir/flags.make
BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o: /home/comrobot8/bob_robotics/src/robots/norbot.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_robots.dir/norbot.cc.o -c /home/comrobot8/bob_robotics/src/robots/norbot.cc

BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_robots.dir/norbot.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/robots/norbot.cc > CMakeFiles/bob_robots.dir/norbot.cc.i

BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_robots.dir/norbot.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/robots/norbot.cc -o CMakeFiles/bob_robots.dir/norbot.cc.s

BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o.requires:

.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o.requires

BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o.provides: BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o.requires
	$(MAKE) -f BoB/modules/robots/CMakeFiles/bob_robots.dir/build.make BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o.provides.build
.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o.provides

BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o.provides.build: BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o


BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o: BoB/modules/robots/CMakeFiles/bob_robots.dir/flags.make
BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o: /home/comrobot8/bob_robotics/src/robots/omni2d.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_robots.dir/omni2d.cc.o -c /home/comrobot8/bob_robotics/src/robots/omni2d.cc

BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_robots.dir/omni2d.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/robots/omni2d.cc > CMakeFiles/bob_robots.dir/omni2d.cc.i

BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_robots.dir/omni2d.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/robots/omni2d.cc -o CMakeFiles/bob_robots.dir/omni2d.cc.s

BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o.requires:

.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o.requires

BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o.provides: BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o.requires
	$(MAKE) -f BoB/modules/robots/CMakeFiles/bob_robots.dir/build.make BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o.provides.build
.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o.provides

BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o.provides.build: BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o


BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o: BoB/modules/robots/CMakeFiles/bob_robots.dir/flags.make
BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o: /home/comrobot8/bob_robotics/src/robots/surveyor.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_robots.dir/surveyor.cc.o -c /home/comrobot8/bob_robotics/src/robots/surveyor.cc

BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_robots.dir/surveyor.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/robots/surveyor.cc > CMakeFiles/bob_robots.dir/surveyor.cc.i

BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_robots.dir/surveyor.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/robots/surveyor.cc -o CMakeFiles/bob_robots.dir/surveyor.cc.s

BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o.requires:

.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o.requires

BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o.provides: BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o.requires
	$(MAKE) -f BoB/modules/robots/CMakeFiles/bob_robots.dir/build.make BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o.provides.build
.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o.provides

BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o.provides.build: BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o


BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o: BoB/modules/robots/CMakeFiles/bob_robots.dir/flags.make
BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o: /home/comrobot8/bob_robotics/src/robots/tank_netsink.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_robots.dir/tank_netsink.cc.o -c /home/comrobot8/bob_robotics/src/robots/tank_netsink.cc

BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_robots.dir/tank_netsink.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/robots/tank_netsink.cc > CMakeFiles/bob_robots.dir/tank_netsink.cc.i

BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_robots.dir/tank_netsink.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/robots/tank_netsink.cc -o CMakeFiles/bob_robots.dir/tank_netsink.cc.s

BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o.requires:

.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o.requires

BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o.provides: BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o.requires
	$(MAKE) -f BoB/modules/robots/CMakeFiles/bob_robots.dir/build.make BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o.provides.build
.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o.provides

BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o.provides.build: BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o


BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o: BoB/modules/robots/CMakeFiles/bob_robots.dir/flags.make
BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o: /home/comrobot8/bob_robotics/src/robots/tank.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_robots.dir/tank.cc.o -c /home/comrobot8/bob_robotics/src/robots/tank.cc

BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_robots.dir/tank.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/robots/tank.cc > CMakeFiles/bob_robots.dir/tank.cc.i

BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_robots.dir/tank.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/robots/tank.cc -o CMakeFiles/bob_robots.dir/tank.cc.s

BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o.requires:

.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o.requires

BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o.provides: BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o.requires
	$(MAKE) -f BoB/modules/robots/CMakeFiles/bob_robots.dir/build.make BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o.provides.build
.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o.provides

BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o.provides.build: BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o


BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o: BoB/modules/robots/CMakeFiles/bob_robots.dir/flags.make
BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o: /home/comrobot8/bob_robotics/src/robots/uav.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_robots.dir/uav.cc.o -c /home/comrobot8/bob_robotics/src/robots/uav.cc

BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_robots.dir/uav.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/robots/uav.cc > CMakeFiles/bob_robots.dir/uav.cc.i

BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_robots.dir/uav.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/robots/uav.cc -o CMakeFiles/bob_robots.dir/uav.cc.s

BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o.requires:

.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o.requires

BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o.provides: BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o.requires
	$(MAKE) -f BoB/modules/robots/CMakeFiles/bob_robots.dir/build.make BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o.provides.build
.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o.provides

BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o.provides.build: BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o


# Object files for target bob_robots
bob_robots_OBJECTS = \
"CMakeFiles/bob_robots.dir/mecanum.cc.o" \
"CMakeFiles/bob_robots.dir/norbot.cc.o" \
"CMakeFiles/bob_robots.dir/omni2d.cc.o" \
"CMakeFiles/bob_robots.dir/surveyor.cc.o" \
"CMakeFiles/bob_robots.dir/tank_netsink.cc.o" \
"CMakeFiles/bob_robots.dir/tank.cc.o" \
"CMakeFiles/bob_robots.dir/uav.cc.o"

# External object files for target bob_robots
bob_robots_EXTERNAL_OBJECTS =

BoB/modules/robots/./libbob_robots.a: BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o
BoB/modules/robots/./libbob_robots.a: BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o
BoB/modules/robots/./libbob_robots.a: BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o
BoB/modules/robots/./libbob_robots.a: BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o
BoB/modules/robots/./libbob_robots.a: BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o
BoB/modules/robots/./libbob_robots.a: BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o
BoB/modules/robots/./libbob_robots.a: BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o
BoB/modules/robots/./libbob_robots.a: BoB/modules/robots/CMakeFiles/bob_robots.dir/build.make
BoB/modules/robots/./libbob_robots.a: BoB/modules/robots/CMakeFiles/bob_robots.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library ./libbob_robots.a"
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && $(CMAKE_COMMAND) -P CMakeFiles/bob_robots.dir/cmake_clean_target.cmake
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bob_robots.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
BoB/modules/robots/CMakeFiles/bob_robots.dir/build: BoB/modules/robots/./libbob_robots.a

.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/build

BoB/modules/robots/CMakeFiles/bob_robots.dir/requires: BoB/modules/robots/CMakeFiles/bob_robots.dir/mecanum.cc.o.requires
BoB/modules/robots/CMakeFiles/bob_robots.dir/requires: BoB/modules/robots/CMakeFiles/bob_robots.dir/norbot.cc.o.requires
BoB/modules/robots/CMakeFiles/bob_robots.dir/requires: BoB/modules/robots/CMakeFiles/bob_robots.dir/omni2d.cc.o.requires
BoB/modules/robots/CMakeFiles/bob_robots.dir/requires: BoB/modules/robots/CMakeFiles/bob_robots.dir/surveyor.cc.o.requires
BoB/modules/robots/CMakeFiles/bob_robots.dir/requires: BoB/modules/robots/CMakeFiles/bob_robots.dir/tank_netsink.cc.o.requires
BoB/modules/robots/CMakeFiles/bob_robots.dir/requires: BoB/modules/robots/CMakeFiles/bob_robots.dir/tank.cc.o.requires
BoB/modules/robots/CMakeFiles/bob_robots.dir/requires: BoB/modules/robots/CMakeFiles/bob_robots.dir/uav.cc.o.requires

.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/requires

BoB/modules/robots/CMakeFiles/bob_robots.dir/clean:
	cd /home/comrobot8/hackathon/build/BoB/modules/robots && $(CMAKE_COMMAND) -P CMakeFiles/bob_robots.dir/cmake_clean.cmake
.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/clean

BoB/modules/robots/CMakeFiles/bob_robots.dir/depend:
	cd /home/comrobot8/hackathon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/comrobot8/hackathon /home/comrobot8/bob_robotics/src/robots /home/comrobot8/hackathon/build /home/comrobot8/hackathon/build/BoB/modules/robots /home/comrobot8/hackathon/build/BoB/modules/robots/CMakeFiles/bob_robots.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : BoB/modules/robots/CMakeFiles/bob_robots.dir/depend
