# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tyrel/learnCoding/exercism/cpp/hello-world

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tyrel/learnCoding/exercism/cpp/hello-world

# Include any dependencies generated for this target.
include CMakeFiles/hello-world.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hello-world.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello-world.dir/flags.make

CMakeFiles/hello-world.dir/hello_world_test.cpp.o: CMakeFiles/hello-world.dir/flags.make
CMakeFiles/hello-world.dir/hello_world_test.cpp.o: hello_world_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tyrel/learnCoding/exercism/cpp/hello-world/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello-world.dir/hello_world_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello-world.dir/hello_world_test.cpp.o -c /home/tyrel/learnCoding/exercism/cpp/hello-world/hello_world_test.cpp

CMakeFiles/hello-world.dir/hello_world_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello-world.dir/hello_world_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tyrel/learnCoding/exercism/cpp/hello-world/hello_world_test.cpp > CMakeFiles/hello-world.dir/hello_world_test.cpp.i

CMakeFiles/hello-world.dir/hello_world_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello-world.dir/hello_world_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tyrel/learnCoding/exercism/cpp/hello-world/hello_world_test.cpp -o CMakeFiles/hello-world.dir/hello_world_test.cpp.s

# Object files for target hello-world
hello__world_OBJECTS = \
"CMakeFiles/hello-world.dir/hello_world_test.cpp.o"

# External object files for target hello-world
hello__world_EXTERNAL_OBJECTS =

hello-world: CMakeFiles/hello-world.dir/hello_world_test.cpp.o
hello-world: CMakeFiles/hello-world.dir/build.make
hello-world: /usr/local/boost_1_59_0/stage/lib/libboost_unit_test_framework.a
hello-world: /usr/local/boost_1_59_0/stage/lib/libboost_date_time.a
hello-world: /usr/local/boost_1_59_0/stage/lib/libboost_regex.a
hello-world: CMakeFiles/hello-world.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tyrel/learnCoding/exercism/cpp/hello-world/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hello-world"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello-world.dir/link.txt --verbose=$(VERBOSE)
	./hello-world

# Rule to build all files generated by this target.
CMakeFiles/hello-world.dir/build: hello-world

.PHONY : CMakeFiles/hello-world.dir/build

CMakeFiles/hello-world.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello-world.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello-world.dir/clean

CMakeFiles/hello-world.dir/depend:
	cd /home/tyrel/learnCoding/exercism/cpp/hello-world && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tyrel/learnCoding/exercism/cpp/hello-world /home/tyrel/learnCoding/exercism/cpp/hello-world /home/tyrel/learnCoding/exercism/cpp/hello-world /home/tyrel/learnCoding/exercism/cpp/hello-world /home/tyrel/learnCoding/exercism/cpp/hello-world/CMakeFiles/hello-world.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello-world.dir/depend

