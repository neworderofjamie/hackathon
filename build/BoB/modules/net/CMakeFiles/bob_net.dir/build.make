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
include BoB/modules/net/CMakeFiles/bob_net.dir/depend.make

# Include the progress variables for this target.
include BoB/modules/net/CMakeFiles/bob_net.dir/progress.make

# Include the compile flags for this target's objects.
include BoB/modules/net/CMakeFiles/bob_net.dir/flags.make

BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o: BoB/modules/net/CMakeFiles/bob_net.dir/flags.make
BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o: /home/comrobot8/bob_robotics/src/net/client.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_net.dir/client.cc.o -c /home/comrobot8/bob_robotics/src/net/client.cc

BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_net.dir/client.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/net/client.cc > CMakeFiles/bob_net.dir/client.cc.i

BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_net.dir/client.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/net/client.cc -o CMakeFiles/bob_net.dir/client.cc.s

BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o.requires:

.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o.requires

BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o.provides: BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o.requires
	$(MAKE) -f BoB/modules/net/CMakeFiles/bob_net.dir/build.make BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o.provides.build
.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o.provides

BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o.provides.build: BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o


BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o: BoB/modules/net/CMakeFiles/bob_net.dir/flags.make
BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o: /home/comrobot8/bob_robotics/src/net/connection.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_net.dir/connection.cc.o -c /home/comrobot8/bob_robotics/src/net/connection.cc

BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_net.dir/connection.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/net/connection.cc > CMakeFiles/bob_net.dir/connection.cc.i

BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_net.dir/connection.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/net/connection.cc -o CMakeFiles/bob_net.dir/connection.cc.s

BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o.requires:

.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o.requires

BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o.provides: BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o.requires
	$(MAKE) -f BoB/modules/net/CMakeFiles/bob_net.dir/build.make BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o.provides.build
.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o.provides

BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o.provides.build: BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o


BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o: BoB/modules/net/CMakeFiles/bob_net.dir/flags.make
BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o: /home/comrobot8/bob_robotics/src/net/imu_netsource.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_net.dir/imu_netsource.cc.o -c /home/comrobot8/bob_robotics/src/net/imu_netsource.cc

BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_net.dir/imu_netsource.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/net/imu_netsource.cc > CMakeFiles/bob_net.dir/imu_netsource.cc.i

BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_net.dir/imu_netsource.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/net/imu_netsource.cc -o CMakeFiles/bob_net.dir/imu_netsource.cc.s

BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o.requires:

.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o.requires

BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o.provides: BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o.requires
	$(MAKE) -f BoB/modules/net/CMakeFiles/bob_net.dir/build.make BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o.provides.build
.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o.provides

BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o.provides.build: BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o


BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o: BoB/modules/net/CMakeFiles/bob_net.dir/flags.make
BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o: /home/comrobot8/bob_robotics/src/net/server.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_net.dir/server.cc.o -c /home/comrobot8/bob_robotics/src/net/server.cc

BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_net.dir/server.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/net/server.cc > CMakeFiles/bob_net.dir/server.cc.i

BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_net.dir/server.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/net/server.cc -o CMakeFiles/bob_net.dir/server.cc.s

BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o.requires:

.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o.requires

BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o.provides: BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o.requires
	$(MAKE) -f BoB/modules/net/CMakeFiles/bob_net.dir/build.make BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o.provides.build
.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o.provides

BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o.provides.build: BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o


BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o: BoB/modules/net/CMakeFiles/bob_net.dir/flags.make
BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o: /home/comrobot8/bob_robotics/src/net/socket.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bob_net.dir/socket.cc.o -c /home/comrobot8/bob_robotics/src/net/socket.cc

BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bob_net.dir/socket.cc.i"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/comrobot8/bob_robotics/src/net/socket.cc > CMakeFiles/bob_net.dir/socket.cc.i

BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bob_net.dir/socket.cc.s"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/comrobot8/bob_robotics/src/net/socket.cc -o CMakeFiles/bob_net.dir/socket.cc.s

BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o.requires:

.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o.requires

BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o.provides: BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o.requires
	$(MAKE) -f BoB/modules/net/CMakeFiles/bob_net.dir/build.make BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o.provides.build
.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o.provides

BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o.provides.build: BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o


# Object files for target bob_net
bob_net_OBJECTS = \
"CMakeFiles/bob_net.dir/client.cc.o" \
"CMakeFiles/bob_net.dir/connection.cc.o" \
"CMakeFiles/bob_net.dir/imu_netsource.cc.o" \
"CMakeFiles/bob_net.dir/server.cc.o" \
"CMakeFiles/bob_net.dir/socket.cc.o"

# External object files for target bob_net
bob_net_EXTERNAL_OBJECTS =

BoB/modules/net/./libbob_net.a: BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o
BoB/modules/net/./libbob_net.a: BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o
BoB/modules/net/./libbob_net.a: BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o
BoB/modules/net/./libbob_net.a: BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o
BoB/modules/net/./libbob_net.a: BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o
BoB/modules/net/./libbob_net.a: BoB/modules/net/CMakeFiles/bob_net.dir/build.make
BoB/modules/net/./libbob_net.a: BoB/modules/net/CMakeFiles/bob_net.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/comrobot8/hackathon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library ./libbob_net.a"
	cd /home/comrobot8/hackathon/build/BoB/modules/net && $(CMAKE_COMMAND) -P CMakeFiles/bob_net.dir/cmake_clean_target.cmake
	cd /home/comrobot8/hackathon/build/BoB/modules/net && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bob_net.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
BoB/modules/net/CMakeFiles/bob_net.dir/build: BoB/modules/net/./libbob_net.a

.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/build

BoB/modules/net/CMakeFiles/bob_net.dir/requires: BoB/modules/net/CMakeFiles/bob_net.dir/client.cc.o.requires
BoB/modules/net/CMakeFiles/bob_net.dir/requires: BoB/modules/net/CMakeFiles/bob_net.dir/connection.cc.o.requires
BoB/modules/net/CMakeFiles/bob_net.dir/requires: BoB/modules/net/CMakeFiles/bob_net.dir/imu_netsource.cc.o.requires
BoB/modules/net/CMakeFiles/bob_net.dir/requires: BoB/modules/net/CMakeFiles/bob_net.dir/server.cc.o.requires
BoB/modules/net/CMakeFiles/bob_net.dir/requires: BoB/modules/net/CMakeFiles/bob_net.dir/socket.cc.o.requires

.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/requires

BoB/modules/net/CMakeFiles/bob_net.dir/clean:
	cd /home/comrobot8/hackathon/build/BoB/modules/net && $(CMAKE_COMMAND) -P CMakeFiles/bob_net.dir/cmake_clean.cmake
.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/clean

BoB/modules/net/CMakeFiles/bob_net.dir/depend:
	cd /home/comrobot8/hackathon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/comrobot8/hackathon /home/comrobot8/bob_robotics/src/net /home/comrobot8/hackathon/build /home/comrobot8/hackathon/build/BoB/modules/net /home/comrobot8/hackathon/build/BoB/modules/net/CMakeFiles/bob_net.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : BoB/modules/net/CMakeFiles/bob_net.dir/depend

