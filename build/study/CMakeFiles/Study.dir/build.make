# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/simon/programming/P1Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/simon/programming/P1Project/build

# Include any dependencies generated for this target.
include study/CMakeFiles/Study.dir/depend.make

# Include the progress variables for this target.
include study/CMakeFiles/Study.dir/progress.make

# Include the compile flags for this target's objects.
include study/CMakeFiles/Study.dir/flags.make

study/CMakeFiles/Study.dir/main.c.o: study/CMakeFiles/Study.dir/flags.make
study/CMakeFiles/Study.dir/main.c.o: ../study/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/simon/programming/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object study/CMakeFiles/Study.dir/main.c.o"
	cd /home/simon/programming/P1Project/build/study && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Study.dir/main.c.o   -c /home/simon/programming/P1Project/study/main.c

study/CMakeFiles/Study.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Study.dir/main.c.i"
	cd /home/simon/programming/P1Project/build/study && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/simon/programming/P1Project/study/main.c > CMakeFiles/Study.dir/main.c.i

study/CMakeFiles/Study.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Study.dir/main.c.s"
	cd /home/simon/programming/P1Project/build/study && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/simon/programming/P1Project/study/main.c -o CMakeFiles/Study.dir/main.c.s

study/CMakeFiles/Study.dir/main.c.o.requires:

.PHONY : study/CMakeFiles/Study.dir/main.c.o.requires

study/CMakeFiles/Study.dir/main.c.o.provides: study/CMakeFiles/Study.dir/main.c.o.requires
	$(MAKE) -f study/CMakeFiles/Study.dir/build.make study/CMakeFiles/Study.dir/main.c.o.provides.build
.PHONY : study/CMakeFiles/Study.dir/main.c.o.provides

study/CMakeFiles/Study.dir/main.c.o.provides.build: study/CMakeFiles/Study.dir/main.c.o


# Object files for target Study
Study_OBJECTS = \
"CMakeFiles/Study.dir/main.c.o"

# External object files for target Study
Study_EXTERNAL_OBJECTS =

study/Study: study/CMakeFiles/Study.dir/main.c.o
study/Study: study/CMakeFiles/Study.dir/build.make
study/Study: study/src/libsource.a
study/Study: study/CMakeFiles/Study.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/simon/programming/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Study"
	cd /home/simon/programming/P1Project/build/study && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Study.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
study/CMakeFiles/Study.dir/build: study/Study

.PHONY : study/CMakeFiles/Study.dir/build

study/CMakeFiles/Study.dir/requires: study/CMakeFiles/Study.dir/main.c.o.requires

.PHONY : study/CMakeFiles/Study.dir/requires

study/CMakeFiles/Study.dir/clean:
	cd /home/simon/programming/P1Project/build/study && $(CMAKE_COMMAND) -P CMakeFiles/Study.dir/cmake_clean.cmake
.PHONY : study/CMakeFiles/Study.dir/clean

study/CMakeFiles/Study.dir/depend:
	cd /home/simon/programming/P1Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/simon/programming/P1Project /home/simon/programming/P1Project/study /home/simon/programming/P1Project/build /home/simon/programming/P1Project/build/study /home/simon/programming/P1Project/build/study/CMakeFiles/Study.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : study/CMakeFiles/Study.dir/depend
