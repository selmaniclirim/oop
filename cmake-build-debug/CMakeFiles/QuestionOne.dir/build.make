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
CMAKE_BINARY_DIR = C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/QuestionOne.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QuestionOne.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QuestionOne.dir/flags.make

CMakeFiles/QuestionOne.dir/LabFour/QuestionOne.cpp.obj: CMakeFiles/QuestionOne.dir/flags.make
CMakeFiles/QuestionOne.dir/LabFour/QuestionOne.cpp.obj: ../LabFour/QuestionOne.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QuestionOne.dir/LabFour/QuestionOne.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\QuestionOne.dir\LabFour\QuestionOne.cpp.obj -c C:\Users\Clirim\Documents\GitHub\oop\LabFour\QuestionOne.cpp

CMakeFiles/QuestionOne.dir/LabFour/QuestionOne.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QuestionOne.dir/LabFour/QuestionOne.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Clirim\Documents\GitHub\oop\LabFour\QuestionOne.cpp > CMakeFiles\QuestionOne.dir\LabFour\QuestionOne.cpp.i

CMakeFiles/QuestionOne.dir/LabFour/QuestionOne.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QuestionOne.dir/LabFour/QuestionOne.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Clirim\Documents\GitHub\oop\LabFour\QuestionOne.cpp -o CMakeFiles\QuestionOne.dir\LabFour\QuestionOne.cpp.s

# Object files for target QuestionOne
QuestionOne_OBJECTS = \
"CMakeFiles/QuestionOne.dir/LabFour/QuestionOne.cpp.obj"

# External object files for target QuestionOne
QuestionOne_EXTERNAL_OBJECTS =

QuestionOne.exe: CMakeFiles/QuestionOne.dir/LabFour/QuestionOne.cpp.obj
QuestionOne.exe: CMakeFiles/QuestionOne.dir/build.make
QuestionOne.exe: CMakeFiles/QuestionOne.dir/linklibs.rsp
QuestionOne.exe: CMakeFiles/QuestionOne.dir/objects1.rsp
QuestionOne.exe: CMakeFiles/QuestionOne.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable QuestionOne.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\QuestionOne.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QuestionOne.dir/build: QuestionOne.exe

.PHONY : CMakeFiles/QuestionOne.dir/build

CMakeFiles/QuestionOne.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QuestionOne.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QuestionOne.dir/clean

CMakeFiles/QuestionOne.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Clirim\Documents\GitHub\oop C:\Users\Clirim\Documents\GitHub\oop C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug\CMakeFiles\QuestionOne.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QuestionOne.dir/depend

