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
CMAKE_SOURCE_DIR = /home/jacob/Desktop/P1Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jacob/Desktop/P1Project/build

# Include any dependencies generated for this target.
include study/src/CMakeFiles/source.dir/depend.make

# Include the progress variables for this target.
include study/src/CMakeFiles/source.dir/progress.make

# Include the compile flags for this target's objects.
include study/src/CMakeFiles/source.dir/flags.make

study/src/CMakeFiles/source.dir/fakultet.c.o: study/src/CMakeFiles/source.dir/flags.make
study/src/CMakeFiles/source.dir/fakultet.c.o: ../study/src/fakultet.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacob/Desktop/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object study/src/CMakeFiles/source.dir/fakultet.c.o"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/source.dir/fakultet.c.o   -c /home/jacob/Desktop/P1Project/study/src/fakultet.c

study/src/CMakeFiles/source.dir/fakultet.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/source.dir/fakultet.c.i"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jacob/Desktop/P1Project/study/src/fakultet.c > CMakeFiles/source.dir/fakultet.c.i

study/src/CMakeFiles/source.dir/fakultet.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/source.dir/fakultet.c.s"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jacob/Desktop/P1Project/study/src/fakultet.c -o CMakeFiles/source.dir/fakultet.c.s

study/src/CMakeFiles/source.dir/fakultet.c.o.requires:

.PHONY : study/src/CMakeFiles/source.dir/fakultet.c.o.requires

study/src/CMakeFiles/source.dir/fakultet.c.o.provides: study/src/CMakeFiles/source.dir/fakultet.c.o.requires
	$(MAKE) -f study/src/CMakeFiles/source.dir/build.make study/src/CMakeFiles/source.dir/fakultet.c.o.provides.build
.PHONY : study/src/CMakeFiles/source.dir/fakultet.c.o.provides

study/src/CMakeFiles/source.dir/fakultet.c.o.provides.build: study/src/CMakeFiles/source.dir/fakultet.c.o


study/src/CMakeFiles/source.dir/Humaniora.c.o: study/src/CMakeFiles/source.dir/flags.make
study/src/CMakeFiles/source.dir/Humaniora.c.o: ../study/src/Humaniora.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacob/Desktop/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object study/src/CMakeFiles/source.dir/Humaniora.c.o"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/source.dir/Humaniora.c.o   -c /home/jacob/Desktop/P1Project/study/src/Humaniora.c

study/src/CMakeFiles/source.dir/Humaniora.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/source.dir/Humaniora.c.i"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jacob/Desktop/P1Project/study/src/Humaniora.c > CMakeFiles/source.dir/Humaniora.c.i

study/src/CMakeFiles/source.dir/Humaniora.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/source.dir/Humaniora.c.s"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jacob/Desktop/P1Project/study/src/Humaniora.c -o CMakeFiles/source.dir/Humaniora.c.s

study/src/CMakeFiles/source.dir/Humaniora.c.o.requires:

.PHONY : study/src/CMakeFiles/source.dir/Humaniora.c.o.requires

study/src/CMakeFiles/source.dir/Humaniora.c.o.provides: study/src/CMakeFiles/source.dir/Humaniora.c.o.requires
	$(MAKE) -f study/src/CMakeFiles/source.dir/build.make study/src/CMakeFiles/source.dir/Humaniora.c.o.provides.build
.PHONY : study/src/CMakeFiles/source.dir/Humaniora.c.o.provides

study/src/CMakeFiles/source.dir/Humaniora.c.o.provides.build: study/src/CMakeFiles/source.dir/Humaniora.c.o


study/src/CMakeFiles/source.dir/Naturvidenskab.c.o: study/src/CMakeFiles/source.dir/flags.make
study/src/CMakeFiles/source.dir/Naturvidenskab.c.o: ../study/src/Naturvidenskab.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacob/Desktop/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object study/src/CMakeFiles/source.dir/Naturvidenskab.c.o"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/source.dir/Naturvidenskab.c.o   -c /home/jacob/Desktop/P1Project/study/src/Naturvidenskab.c

study/src/CMakeFiles/source.dir/Naturvidenskab.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/source.dir/Naturvidenskab.c.i"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jacob/Desktop/P1Project/study/src/Naturvidenskab.c > CMakeFiles/source.dir/Naturvidenskab.c.i

study/src/CMakeFiles/source.dir/Naturvidenskab.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/source.dir/Naturvidenskab.c.s"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jacob/Desktop/P1Project/study/src/Naturvidenskab.c -o CMakeFiles/source.dir/Naturvidenskab.c.s

study/src/CMakeFiles/source.dir/Naturvidenskab.c.o.requires:

.PHONY : study/src/CMakeFiles/source.dir/Naturvidenskab.c.o.requires

study/src/CMakeFiles/source.dir/Naturvidenskab.c.o.provides: study/src/CMakeFiles/source.dir/Naturvidenskab.c.o.requires
	$(MAKE) -f study/src/CMakeFiles/source.dir/build.make study/src/CMakeFiles/source.dir/Naturvidenskab.c.o.provides.build
.PHONY : study/src/CMakeFiles/source.dir/Naturvidenskab.c.o.provides

study/src/CMakeFiles/source.dir/Naturvidenskab.c.o.provides.build: study/src/CMakeFiles/source.dir/Naturvidenskab.c.o


study/src/CMakeFiles/source.dir/Samfund.c.o: study/src/CMakeFiles/source.dir/flags.make
study/src/CMakeFiles/source.dir/Samfund.c.o: ../study/src/Samfund.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacob/Desktop/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object study/src/CMakeFiles/source.dir/Samfund.c.o"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/source.dir/Samfund.c.o   -c /home/jacob/Desktop/P1Project/study/src/Samfund.c

study/src/CMakeFiles/source.dir/Samfund.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/source.dir/Samfund.c.i"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jacob/Desktop/P1Project/study/src/Samfund.c > CMakeFiles/source.dir/Samfund.c.i

study/src/CMakeFiles/source.dir/Samfund.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/source.dir/Samfund.c.s"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jacob/Desktop/P1Project/study/src/Samfund.c -o CMakeFiles/source.dir/Samfund.c.s

study/src/CMakeFiles/source.dir/Samfund.c.o.requires:

.PHONY : study/src/CMakeFiles/source.dir/Samfund.c.o.requires

study/src/CMakeFiles/source.dir/Samfund.c.o.provides: study/src/CMakeFiles/source.dir/Samfund.c.o.requires
	$(MAKE) -f study/src/CMakeFiles/source.dir/build.make study/src/CMakeFiles/source.dir/Samfund.c.o.provides.build
.PHONY : study/src/CMakeFiles/source.dir/Samfund.c.o.provides

study/src/CMakeFiles/source.dir/Samfund.c.o.provides.build: study/src/CMakeFiles/source.dir/Samfund.c.o


study/src/CMakeFiles/source.dir/Sundhed.c.o: study/src/CMakeFiles/source.dir/flags.make
study/src/CMakeFiles/source.dir/Sundhed.c.o: ../study/src/Sundhed.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacob/Desktop/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object study/src/CMakeFiles/source.dir/Sundhed.c.o"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/source.dir/Sundhed.c.o   -c /home/jacob/Desktop/P1Project/study/src/Sundhed.c

study/src/CMakeFiles/source.dir/Sundhed.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/source.dir/Sundhed.c.i"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jacob/Desktop/P1Project/study/src/Sundhed.c > CMakeFiles/source.dir/Sundhed.c.i

study/src/CMakeFiles/source.dir/Sundhed.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/source.dir/Sundhed.c.s"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jacob/Desktop/P1Project/study/src/Sundhed.c -o CMakeFiles/source.dir/Sundhed.c.s

study/src/CMakeFiles/source.dir/Sundhed.c.o.requires:

.PHONY : study/src/CMakeFiles/source.dir/Sundhed.c.o.requires

study/src/CMakeFiles/source.dir/Sundhed.c.o.provides: study/src/CMakeFiles/source.dir/Sundhed.c.o.requires
	$(MAKE) -f study/src/CMakeFiles/source.dir/build.make study/src/CMakeFiles/source.dir/Sundhed.c.o.provides.build
.PHONY : study/src/CMakeFiles/source.dir/Sundhed.c.o.provides

study/src/CMakeFiles/source.dir/Sundhed.c.o.provides.build: study/src/CMakeFiles/source.dir/Sundhed.c.o


study/src/CMakeFiles/source.dir/Teknisk.c.o: study/src/CMakeFiles/source.dir/flags.make
study/src/CMakeFiles/source.dir/Teknisk.c.o: ../study/src/Teknisk.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacob/Desktop/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object study/src/CMakeFiles/source.dir/Teknisk.c.o"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/source.dir/Teknisk.c.o   -c /home/jacob/Desktop/P1Project/study/src/Teknisk.c

study/src/CMakeFiles/source.dir/Teknisk.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/source.dir/Teknisk.c.i"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jacob/Desktop/P1Project/study/src/Teknisk.c > CMakeFiles/source.dir/Teknisk.c.i

study/src/CMakeFiles/source.dir/Teknisk.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/source.dir/Teknisk.c.s"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jacob/Desktop/P1Project/study/src/Teknisk.c -o CMakeFiles/source.dir/Teknisk.c.s

study/src/CMakeFiles/source.dir/Teknisk.c.o.requires:

.PHONY : study/src/CMakeFiles/source.dir/Teknisk.c.o.requires

study/src/CMakeFiles/source.dir/Teknisk.c.o.provides: study/src/CMakeFiles/source.dir/Teknisk.c.o.requires
	$(MAKE) -f study/src/CMakeFiles/source.dir/build.make study/src/CMakeFiles/source.dir/Teknisk.c.o.provides.build
.PHONY : study/src/CMakeFiles/source.dir/Teknisk.c.o.provides

study/src/CMakeFiles/source.dir/Teknisk.c.o.provides.build: study/src/CMakeFiles/source.dir/Teknisk.c.o


study/src/CMakeFiles/source.dir/utility.c.o: study/src/CMakeFiles/source.dir/flags.make
study/src/CMakeFiles/source.dir/utility.c.o: ../study/src/utility.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jacob/Desktop/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object study/src/CMakeFiles/source.dir/utility.c.o"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/source.dir/utility.c.o   -c /home/jacob/Desktop/P1Project/study/src/utility.c

study/src/CMakeFiles/source.dir/utility.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/source.dir/utility.c.i"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jacob/Desktop/P1Project/study/src/utility.c > CMakeFiles/source.dir/utility.c.i

study/src/CMakeFiles/source.dir/utility.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/source.dir/utility.c.s"
	cd /home/jacob/Desktop/P1Project/build/study/src && /usr/bin/c89-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jacob/Desktop/P1Project/study/src/utility.c -o CMakeFiles/source.dir/utility.c.s

study/src/CMakeFiles/source.dir/utility.c.o.requires:

.PHONY : study/src/CMakeFiles/source.dir/utility.c.o.requires

study/src/CMakeFiles/source.dir/utility.c.o.provides: study/src/CMakeFiles/source.dir/utility.c.o.requires
	$(MAKE) -f study/src/CMakeFiles/source.dir/build.make study/src/CMakeFiles/source.dir/utility.c.o.provides.build
.PHONY : study/src/CMakeFiles/source.dir/utility.c.o.provides

study/src/CMakeFiles/source.dir/utility.c.o.provides.build: study/src/CMakeFiles/source.dir/utility.c.o


# Object files for target source
source_OBJECTS = \
"CMakeFiles/source.dir/fakultet.c.o" \
"CMakeFiles/source.dir/Humaniora.c.o" \
"CMakeFiles/source.dir/Naturvidenskab.c.o" \
"CMakeFiles/source.dir/Samfund.c.o" \
"CMakeFiles/source.dir/Sundhed.c.o" \
"CMakeFiles/source.dir/Teknisk.c.o" \
"CMakeFiles/source.dir/utility.c.o"

# External object files for target source
source_EXTERNAL_OBJECTS =

study/src/libsource.a: study/src/CMakeFiles/source.dir/fakultet.c.o
study/src/libsource.a: study/src/CMakeFiles/source.dir/Humaniora.c.o
study/src/libsource.a: study/src/CMakeFiles/source.dir/Naturvidenskab.c.o
study/src/libsource.a: study/src/CMakeFiles/source.dir/Samfund.c.o
study/src/libsource.a: study/src/CMakeFiles/source.dir/Sundhed.c.o
study/src/libsource.a: study/src/CMakeFiles/source.dir/Teknisk.c.o
study/src/libsource.a: study/src/CMakeFiles/source.dir/utility.c.o
study/src/libsource.a: study/src/CMakeFiles/source.dir/build.make
study/src/libsource.a: study/src/CMakeFiles/source.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jacob/Desktop/P1Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C static library libsource.a"
	cd /home/jacob/Desktop/P1Project/build/study/src && $(CMAKE_COMMAND) -P CMakeFiles/source.dir/cmake_clean_target.cmake
	cd /home/jacob/Desktop/P1Project/build/study/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/source.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
study/src/CMakeFiles/source.dir/build: study/src/libsource.a

.PHONY : study/src/CMakeFiles/source.dir/build

study/src/CMakeFiles/source.dir/requires: study/src/CMakeFiles/source.dir/fakultet.c.o.requires
study/src/CMakeFiles/source.dir/requires: study/src/CMakeFiles/source.dir/Humaniora.c.o.requires
study/src/CMakeFiles/source.dir/requires: study/src/CMakeFiles/source.dir/Naturvidenskab.c.o.requires
study/src/CMakeFiles/source.dir/requires: study/src/CMakeFiles/source.dir/Samfund.c.o.requires
study/src/CMakeFiles/source.dir/requires: study/src/CMakeFiles/source.dir/Sundhed.c.o.requires
study/src/CMakeFiles/source.dir/requires: study/src/CMakeFiles/source.dir/Teknisk.c.o.requires
study/src/CMakeFiles/source.dir/requires: study/src/CMakeFiles/source.dir/utility.c.o.requires

.PHONY : study/src/CMakeFiles/source.dir/requires

study/src/CMakeFiles/source.dir/clean:
	cd /home/jacob/Desktop/P1Project/build/study/src && $(CMAKE_COMMAND) -P CMakeFiles/source.dir/cmake_clean.cmake
.PHONY : study/src/CMakeFiles/source.dir/clean

study/src/CMakeFiles/source.dir/depend:
	cd /home/jacob/Desktop/P1Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jacob/Desktop/P1Project /home/jacob/Desktop/P1Project/study/src /home/jacob/Desktop/P1Project/build /home/jacob/Desktop/P1Project/build/study/src /home/jacob/Desktop/P1Project/build/study/src/CMakeFiles/source.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : study/src/CMakeFiles/source.dir/depend

