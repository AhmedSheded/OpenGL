# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /snap/clion/137/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/137/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sheded/CLionProjects/untitled1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sheded/CLionProjects/untitled1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/OpenGLLinuxTest1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenGLLinuxTest1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenGLLinuxTest1.dir/flags.make

CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.o: CMakeFiles/OpenGLLinuxTest1.dir/flags.make
CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sheded/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.o -c /home/sheded/CLionProjects/untitled1/main.cpp

CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sheded/CLionProjects/untitled1/main.cpp > CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.i

CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sheded/CLionProjects/untitled1/main.cpp -o CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.s

# Object files for target OpenGLLinuxTest1
OpenGLLinuxTest1_OBJECTS = \
"CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.o"

# External object files for target OpenGLLinuxTest1
OpenGLLinuxTest1_EXTERNAL_OBJECTS =

OpenGLLinuxTest1: CMakeFiles/OpenGLLinuxTest1.dir/main.cpp.o
OpenGLLinuxTest1: CMakeFiles/OpenGLLinuxTest1.dir/build.make
OpenGLLinuxTest1: CMakeFiles/OpenGLLinuxTest1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sheded/CLionProjects/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable OpenGLLinuxTest1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenGLLinuxTest1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenGLLinuxTest1.dir/build: OpenGLLinuxTest1

.PHONY : CMakeFiles/OpenGLLinuxTest1.dir/build

CMakeFiles/OpenGLLinuxTest1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenGLLinuxTest1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenGLLinuxTest1.dir/clean

CMakeFiles/OpenGLLinuxTest1.dir/depend:
	cd /home/sheded/CLionProjects/untitled1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sheded/CLionProjects/untitled1 /home/sheded/CLionProjects/untitled1 /home/sheded/CLionProjects/untitled1/cmake-build-debug /home/sheded/CLionProjects/untitled1/cmake-build-debug /home/sheded/CLionProjects/untitled1/cmake-build-debug/CMakeFiles/OpenGLLinuxTest1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenGLLinuxTest1.dir/depend
