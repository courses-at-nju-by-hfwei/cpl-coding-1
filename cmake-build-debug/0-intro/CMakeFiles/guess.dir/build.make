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
include 0-intro/CMakeFiles/guess.dir/depend.make
# Include the progress variables for this target.
include 0-intro/CMakeFiles/guess.dir/progress.make

# Include the compile flags for this target's objects.
include 0-intro/CMakeFiles/guess.dir/flags.make

0-intro/CMakeFiles/guess.dir/guess.c.o: 0-intro/CMakeFiles/guess.dir/flags.make
0-intro/CMakeFiles/guess.dir/guess.c.o: ../0-intro/guess.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 0-intro/CMakeFiles/guess.dir/guess.c.o"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/0-intro && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/guess.dir/guess.c.o -c /home/hengxin/Documents/c-pl-class/c-pl-coding-1/0-intro/guess.c

0-intro/CMakeFiles/guess.dir/guess.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/guess.dir/guess.c.i"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/0-intro && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hengxin/Documents/c-pl-class/c-pl-coding-1/0-intro/guess.c > CMakeFiles/guess.dir/guess.c.i

0-intro/CMakeFiles/guess.dir/guess.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/guess.dir/guess.c.s"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/0-intro && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hengxin/Documents/c-pl-class/c-pl-coding-1/0-intro/guess.c -o CMakeFiles/guess.dir/guess.c.s

# Object files for target guess
guess_OBJECTS = \
"CMakeFiles/guess.dir/guess.c.o"

# External object files for target guess
guess_EXTERNAL_OBJECTS =

0-intro/guess: 0-intro/CMakeFiles/guess.dir/guess.c.o
0-intro/guess: 0-intro/CMakeFiles/guess.dir/build.make
0-intro/guess: 0-intro/CMakeFiles/guess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable guess"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/0-intro && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/guess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
0-intro/CMakeFiles/guess.dir/build: 0-intro/guess
.PHONY : 0-intro/CMakeFiles/guess.dir/build

0-intro/CMakeFiles/guess.dir/clean:
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/0-intro && $(CMAKE_COMMAND) -P CMakeFiles/guess.dir/cmake_clean.cmake
.PHONY : 0-intro/CMakeFiles/guess.dir/clean

0-intro/CMakeFiles/guess.dir/depend:
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hengxin/Documents/c-pl-class/c-pl-coding-1 /home/hengxin/Documents/c-pl-class/c-pl-coding-1/0-intro /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/0-intro /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/0-intro/CMakeFiles/guess.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 0-intro/CMakeFiles/guess.dir/depend

