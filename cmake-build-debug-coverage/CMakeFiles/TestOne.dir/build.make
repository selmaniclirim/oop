# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Clirim\Documents\GitHub\oop

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/TestOne.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TestOne.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TestOne.dir/flags.make

CMakeFiles/TestOne.dir/Testing/ObjectAssignment.cpp.obj: CMakeFiles/TestOne.dir/flags.make
CMakeFiles/TestOne.dir/Testing/ObjectAssignment.cpp.obj: ../Testing/ObjectAssignment.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TestOne.dir/Testing/ObjectAssignment.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TestOne.dir\Testing\ObjectAssignment.cpp.obj -c C:\Users\Clirim\Documents\GitHub\oop\Testing\ObjectAssignment.cpp

CMakeFiles/TestOne.dir/Testing/ObjectAssignment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TestOne.dir/Testing/ObjectAssignment.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Clirim\Documents\GitHub\oop\Testing\ObjectAssignment.cpp > CMakeFiles\TestOne.dir\Testing\ObjectAssignment.cpp.i

CMakeFiles/TestOne.dir/Testing/ObjectAssignment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TestOne.dir/Testing/ObjectAssignment.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Clirim\Documents\GitHub\oop\Testing\ObjectAssignment.cpp -o CMakeFiles\TestOne.dir\Testing\ObjectAssignment.cpp.s

# Object files for target TestOne
TestOne_OBJECTS = \
"CMakeFiles/TestOne.dir/Testing/ObjectAssignment.cpp.obj"

# External object files for target TestOne
TestOne_EXTERNAL_OBJECTS =

TestOne.exe: CMakeFiles/TestOne.dir/Testing/ObjectAssignment.cpp.obj
TestOne.exe: CMakeFiles/TestOne.dir/build.make
TestOne.exe: CMakeFiles/TestOne.dir/linklibs.rsp
TestOne.exe: CMakeFiles/TestOne.dir/objects1.rsp
TestOne.exe: CMakeFiles/TestOne.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TestOne.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TestOne.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TestOne.dir/build: TestOne.exe

.PHONY : CMakeFiles/TestOne.dir/build

CMakeFiles/TestOne.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TestOne.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TestOne.dir/clean

CMakeFiles/TestOne.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Clirim\Documents\GitHub\oop C:\Users\Clirim\Documents\GitHub\oop C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage\CMakeFiles\TestOne.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TestOne.dir/depend
