# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/hengxin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/hengxin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hengxin/Documents/c-pl-class/c-pl-coding-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/circle.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/circle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/circle.dir/flags.make

CMakeFiles/circle.dir/1-types-io/circle.c.o: CMakeFiles/circle.dir/flags.make
CMakeFiles/circle.dir/1-types-io/circle.c.o: ../1-types-io/circle.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/circle.dir/1-types-io/circle.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/circle.dir/1-types-io/circle.c.o -c /home/hengxin/Documents/c-pl-class/c-pl-coding-1/1-types-io/circle.c

CMakeFiles/circle.dir/1-types-io/circle.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/circle.dir/1-types-io/circle.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hengxin/Documents/c-pl-class/c-pl-coding-1/1-types-io/circle.c > CMakeFiles/circle.dir/1-types-io/circle.c.i

CMakeFiles/circle.dir/1-types-io/circle.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/circle.dir/1-types-io/circle.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hengxin/Documents/c-pl-class/c-pl-coding-1/1-types-io/circle.c -o CMakeFiles/circle.dir/1-types-io/circle.c.s

# Object files for target circle
circle_OBJECTS = \
"CMakeFiles/circle.dir/1-types-io/circle.c.o"

# External object files for target circle
circle_EXTERNAL_OBJECTS =

circle: CMakeFiles/circle.dir/1-types-io/circle.c.o
circle: CMakeFiles/circle.dir/build.make
circle: CMakeFiles/circle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable circle"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/circle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/circle.dir/build: circle
.PHONY : CMakeFiles/circle.dir/build

CMakeFiles/circle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/circle.dir/cmake_clean.cmake
.PHONY : CMakeFiles/circle.dir/clean

CMakeFiles/circle.dir/depend:
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hengxin/Documents/c-pl-class/c-pl-coding-1 /home/hengxin/Documents/c-pl-class/c-pl-coding-1 /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/CMakeFiles/circle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/circle.dir/depend

