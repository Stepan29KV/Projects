# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/stepan/Projects/05.homework/05.homework

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/stepan/Projects/05.homework/05.homework/build

# Include any dependencies generated for this target.
include CMakeFiles/chrono_example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chrono_example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chrono_example.dir/flags.make

CMakeFiles/chrono_example.dir/chrono_example.cpp.o: CMakeFiles/chrono_example.dir/flags.make
CMakeFiles/chrono_example.dir/chrono_example.cpp.o: ../chrono_example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/stepan/Projects/05.homework/05.homework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chrono_example.dir/chrono_example.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chrono_example.dir/chrono_example.cpp.o -c /home/stepan/Projects/05.homework/05.homework/chrono_example.cpp

CMakeFiles/chrono_example.dir/chrono_example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chrono_example.dir/chrono_example.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/stepan/Projects/05.homework/05.homework/chrono_example.cpp > CMakeFiles/chrono_example.dir/chrono_example.cpp.i

CMakeFiles/chrono_example.dir/chrono_example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chrono_example.dir/chrono_example.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/stepan/Projects/05.homework/05.homework/chrono_example.cpp -o CMakeFiles/chrono_example.dir/chrono_example.cpp.s

# Object files for target chrono_example
chrono_example_OBJECTS = \
"CMakeFiles/chrono_example.dir/chrono_example.cpp.o"

# External object files for target chrono_example
chrono_example_EXTERNAL_OBJECTS =

chrono_example: CMakeFiles/chrono_example.dir/chrono_example.cpp.o
chrono_example: CMakeFiles/chrono_example.dir/build.make
chrono_example: CMakeFiles/chrono_example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/stepan/Projects/05.homework/05.homework/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chrono_example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chrono_example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chrono_example.dir/build: chrono_example

.PHONY : CMakeFiles/chrono_example.dir/build

CMakeFiles/chrono_example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chrono_example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chrono_example.dir/clean

CMakeFiles/chrono_example.dir/depend:
	cd /home/stepan/Projects/05.homework/05.homework/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/stepan/Projects/05.homework/05.homework /home/stepan/Projects/05.homework/05.homework /home/stepan/Projects/05.homework/05.homework/build /home/stepan/Projects/05.homework/05.homework/build /home/stepan/Projects/05.homework/05.homework/build/CMakeFiles/chrono_example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chrono_example.dir/depend

