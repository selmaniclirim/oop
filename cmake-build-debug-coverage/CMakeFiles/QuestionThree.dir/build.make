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
include CMakeFiles/QuestionThree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/QuestionThree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/QuestionThree.dir/flags.make

CMakeFiles/QuestionThree.dir/LabThree/QuestionThree.cpp.obj: CMakeFiles/QuestionThree.dir/flags.make
CMakeFiles/QuestionThree.dir/LabThree/QuestionThree.cpp.obj: ../LabThree/QuestionThree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/QuestionThree.dir/LabThree/QuestionThree.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\QuestionThree.dir\LabThree\QuestionThree.cpp.obj -c C:\Users\Clirim\Documents\GitHub\oop\LabThree\QuestionThree.cpp

CMakeFiles/QuestionThree.dir/LabThree/QuestionThree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/QuestionThree.dir/LabThree/QuestionThree.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Clirim\Documents\GitHub\oop\LabThree\QuestionThree.cpp > CMakeFiles\QuestionThree.dir\LabThree\QuestionThree.cpp.i

CMakeFiles/QuestionThree.dir/LabThree/QuestionThree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/QuestionThree.dir/LabThree/QuestionThree.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Clirim\Documents\GitHub\oop\LabThree\QuestionThree.cpp -o CMakeFiles\QuestionThree.dir\LabThree\QuestionThree.cpp.s

# Object files for target QuestionThree
QuestionThree_OBJECTS = \
"CMakeFiles/QuestionThree.dir/LabThree/QuestionThree.cpp.obj"

# External object files for target QuestionThree
QuestionThree_EXTERNAL_OBJECTS =

QuestionThree.exe: CMakeFiles/QuestionThree.dir/LabThree/QuestionThree.cpp.obj
QuestionThree.exe: CMakeFiles/QuestionThree.dir/build.make
QuestionThree.exe: CMakeFiles/QuestionThree.dir/linklibs.rsp
QuestionThree.exe: CMakeFiles/QuestionThree.dir/objects1.rsp
QuestionThree.exe: CMakeFiles/QuestionThree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable QuestionThree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\QuestionThree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/QuestionThree.dir/build: QuestionThree.exe

.PHONY : CMakeFiles/QuestionThree.dir/build

CMakeFiles/QuestionThree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\QuestionThree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/QuestionThree.dir/clean

CMakeFiles/QuestionThree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Clirim\Documents\GitHub\oop C:\Users\Clirim\Documents\GitHub\oop C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage C:\Users\Clirim\Documents\GitHub\oop\cmake-build-debug-coverage\CMakeFiles\QuestionThree.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/QuestionThree.dir/depend

