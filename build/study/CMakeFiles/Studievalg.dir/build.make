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
include study/CMakeFiles/Studievalg.dir/depend.make

# Include the progress variables for this target.
include study/CMakeFiles/Studievalg.dir/progress.make

# Include the compile flags for this target's objects.
include study/CMakeFiles/Studievalg.dir/flags.make

study/CMakeFiles/Studievalg.dir/main.c.o: study/CMakeFiles/Studievalg.dir/flags.make
study/CMakeFiles/Studievalg.dir/main.c.o: ../study/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/simon/programming/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object study/CMakeFiles/Studievalg.dir/main.c.o"
	cd /home/simon/programming/P1Project/build/study && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Studievalg.dir/main.c.o   -c /home/simon/programming/P1Project/study/main.c

study/CMakeFiles/Studievalg.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Studievalg.dir/main.c.i"
	cd /home/simon/programming/P1Project/build/study && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/simon/programming/P1Project/study/main.c > CMakeFiles/Studievalg.dir/main.c.i

study/CMakeFiles/Studievalg.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Studievalg.dir/main.c.s"
	cd /home/simon/programming/P1Project/build/study && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/simon/programming/P1Project/study/main.c -o CMakeFiles/Studievalg.dir/main.c.s

study/CMakeFiles/Studievalg.dir/main.c.o.requires:

.PHONY : study/CMakeFiles/Studievalg.dir/main.c.o.requires

study/CMakeFiles/Studievalg.dir/main.c.o.provides: study/CMakeFiles/Studievalg.dir/main.c.o.requires
	$(MAKE) -f study/CMakeFiles/Studievalg.dir/build.make study/CMakeFiles/Studievalg.dir/main.c.o.provides.build
.PHONY : study/CMakeFiles/Studievalg.dir/main.c.o.provides

study/CMakeFiles/Studievalg.dir/main.c.o.provides.build: study/CMakeFiles/Studievalg.dir/main.c.o


# Object files for target Studievalg
Studievalg_OBJECTS = \
"CMakeFiles/Studievalg.dir/main.c.o"

# External object files for target Studievalg
Studievalg_EXTERNAL_OBJECTS =

../Studievalg: study/CMakeFiles/Studievalg.dir/main.c.o
../Studievalg: study/CMakeFiles/Studievalg.dir/build.make
../Studievalg: study/src/libsource.a
../Studievalg: study/CMakeFiles/Studievalg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/simon/programming/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../../Studievalg"
	cd /home/simon/programming/P1Project/build/study && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Studievalg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
study/CMakeFiles/Studievalg.dir/build: ../Studievalg

.PHONY : study/CMakeFiles/Studievalg.dir/build

study/CMakeFiles/Studievalg.dir/requires: study/CMakeFiles/Studievalg.dir/main.c.o.requires

.PHONY : study/CMakeFiles/Studievalg.dir/requires

study/CMakeFiles/Studievalg.dir/clean:
	cd /home/simon/programming/P1Project/build/study && $(CMAKE_COMMAND) -P CMakeFiles/Studievalg.dir/cmake_clean.cmake
.PHONY : study/CMakeFiles/Studievalg.dir/clean

study/CMakeFiles/Studievalg.dir/depend:
	cd /home/simon/programming/P1Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/simon/programming/P1Project /home/simon/programming/P1Project/study /home/simon/programming/P1Project/build /home/simon/programming/P1Project/build/study /home/simon/programming/P1Project/build/study/CMakeFiles/Studievalg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : study/CMakeFiles/Studievalg.dir/depend

