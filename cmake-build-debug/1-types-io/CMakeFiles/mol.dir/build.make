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
include 1-types-io/CMakeFiles/mol.dir/depend.make
# Include the progress variables for this target.
include 1-types-io/CMakeFiles/mol.dir/progress.make

# Include the compile flags for this target's objects.
include 1-types-io/CMakeFiles/mol.dir/flags.make

1-types-io/CMakeFiles/mol.dir/mol.c.o: 1-types-io/CMakeFiles/mol.dir/flags.make
1-types-io/CMakeFiles/mol.dir/mol.c.o: ../1-types-io/mol.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object 1-types-io/CMakeFiles/mol.dir/mol.c.o"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/1-types-io && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/mol.dir/mol.c.o -c /home/hengxin/Documents/c-pl-class/c-pl-coding-1/1-types-io/mol.c

1-types-io/CMakeFiles/mol.dir/mol.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mol.dir/mol.c.i"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/1-types-io && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/hengxin/Documents/c-pl-class/c-pl-coding-1/1-types-io/mol.c > CMakeFiles/mol.dir/mol.c.i

1-types-io/CMakeFiles/mol.dir/mol.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mol.dir/mol.c.s"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/1-types-io && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/hengxin/Documents/c-pl-class/c-pl-coding-1/1-types-io/mol.c -o CMakeFiles/mol.dir/mol.c.s

# Object files for target mol
mol_OBJECTS = \
"CMakeFiles/mol.dir/mol.c.o"

# External object files for target mol
mol_EXTERNAL_OBJECTS =

1-types-io/mol: 1-types-io/CMakeFiles/mol.dir/mol.c.o
1-types-io/mol: 1-types-io/CMakeFiles/mol.dir/build.make
1-types-io/mol: 1-types-io/CMakeFiles/mol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable mol"
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/1-types-io && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mol.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
1-types-io/CMakeFiles/mol.dir/build: 1-types-io/mol
.PHONY : 1-types-io/CMakeFiles/mol.dir/build

1-types-io/CMakeFiles/mol.dir/clean:
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/1-types-io && $(CMAKE_COMMAND) -P CMakeFiles/mol.dir/cmake_clean.cmake
.PHONY : 1-types-io/CMakeFiles/mol.dir/clean

1-types-io/CMakeFiles/mol.dir/depend:
	cd /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hengxin/Documents/c-pl-class/c-pl-coding-1 /home/hengxin/Documents/c-pl-class/c-pl-coding-1/1-types-io /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/1-types-io /home/hengxin/Documents/c-pl-class/c-pl-coding-1/cmake-build-debug/1-types-io/CMakeFiles/mol.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 1-types-io/CMakeFiles/mol.dir/depend

