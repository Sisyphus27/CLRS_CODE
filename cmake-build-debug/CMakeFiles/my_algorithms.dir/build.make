# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\software\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\software\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\zy\Documents\GitHub\CLRS_CODE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/my_algorithms.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/my_algorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_algorithms.dir/flags.make

CMakeFiles/my_algorithms.dir/main.cpp.obj: CMakeFiles/my_algorithms.dir/flags.make
CMakeFiles/my_algorithms.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/my_algorithms.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\my_algorithms.dir\main.cpp.obj -c C:\Users\zy\Documents\GitHub\CLRS_CODE\main.cpp

CMakeFiles/my_algorithms.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_algorithms.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zy\Documents\GitHub\CLRS_CODE\main.cpp > CMakeFiles\my_algorithms.dir\main.cpp.i

CMakeFiles/my_algorithms.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_algorithms.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zy\Documents\GitHub\CLRS_CODE\main.cpp -o CMakeFiles\my_algorithms.dir\main.cpp.s

CMakeFiles/my_algorithms.dir/sort_algorithms.cpp.obj: CMakeFiles/my_algorithms.dir/flags.make
CMakeFiles/my_algorithms.dir/sort_algorithms.cpp.obj: ../sort_algorithms.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/my_algorithms.dir/sort_algorithms.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\my_algorithms.dir\sort_algorithms.cpp.obj -c C:\Users\zy\Documents\GitHub\CLRS_CODE\sort_algorithms.cpp

CMakeFiles/my_algorithms.dir/sort_algorithms.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_algorithms.dir/sort_algorithms.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zy\Documents\GitHub\CLRS_CODE\sort_algorithms.cpp > CMakeFiles\my_algorithms.dir\sort_algorithms.cpp.i

CMakeFiles/my_algorithms.dir/sort_algorithms.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_algorithms.dir/sort_algorithms.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zy\Documents\GitHub\CLRS_CODE\sort_algorithms.cpp -o CMakeFiles\my_algorithms.dir\sort_algorithms.cpp.s

CMakeFiles/my_algorithms.dir/divide-and-conquer.cpp.obj: CMakeFiles/my_algorithms.dir/flags.make
CMakeFiles/my_algorithms.dir/divide-and-conquer.cpp.obj: ../divide-and-conquer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/my_algorithms.dir/divide-and-conquer.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\my_algorithms.dir\divide-and-conquer.cpp.obj -c C:\Users\zy\Documents\GitHub\CLRS_CODE\divide-and-conquer.cpp

CMakeFiles/my_algorithms.dir/divide-and-conquer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_algorithms.dir/divide-and-conquer.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zy\Documents\GitHub\CLRS_CODE\divide-and-conquer.cpp > CMakeFiles\my_algorithms.dir\divide-and-conquer.cpp.i

CMakeFiles/my_algorithms.dir/divide-and-conquer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_algorithms.dir/divide-and-conquer.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zy\Documents\GitHub\CLRS_CODE\divide-and-conquer.cpp -o CMakeFiles\my_algorithms.dir\divide-and-conquer.cpp.s

CMakeFiles/my_algorithms.dir/my_random.cpp.obj: CMakeFiles/my_algorithms.dir/flags.make
CMakeFiles/my_algorithms.dir/my_random.cpp.obj: ../my_random.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/my_algorithms.dir/my_random.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\my_algorithms.dir\my_random.cpp.obj -c C:\Users\zy\Documents\GitHub\CLRS_CODE\my_random.cpp

CMakeFiles/my_algorithms.dir/my_random.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_algorithms.dir/my_random.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zy\Documents\GitHub\CLRS_CODE\my_random.cpp > CMakeFiles\my_algorithms.dir\my_random.cpp.i

CMakeFiles/my_algorithms.dir/my_random.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_algorithms.dir/my_random.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zy\Documents\GitHub\CLRS_CODE\my_random.cpp -o CMakeFiles\my_algorithms.dir\my_random.cpp.s

CMakeFiles/my_algorithms.dir/my_time_cost.cpp.obj: CMakeFiles/my_algorithms.dir/flags.make
CMakeFiles/my_algorithms.dir/my_time_cost.cpp.obj: ../my_time_cost.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/my_algorithms.dir/my_time_cost.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\my_algorithms.dir\my_time_cost.cpp.obj -c C:\Users\zy\Documents\GitHub\CLRS_CODE\my_time_cost.cpp

CMakeFiles/my_algorithms.dir/my_time_cost.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_algorithms.dir/my_time_cost.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zy\Documents\GitHub\CLRS_CODE\my_time_cost.cpp > CMakeFiles\my_algorithms.dir\my_time_cost.cpp.i

CMakeFiles/my_algorithms.dir/my_time_cost.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_algorithms.dir/my_time_cost.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zy\Documents\GitHub\CLRS_CODE\my_time_cost.cpp -o CMakeFiles\my_algorithms.dir\my_time_cost.cpp.s

CMakeFiles/my_algorithms.dir/Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.cpp.obj: CMakeFiles/my_algorithms.dir/flags.make
CMakeFiles/my_algorithms.dir/Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.cpp.obj: ../Probabilistic\ Analysis\ and\ Randomized\ Algorithms/hiring_problem.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/my_algorithms.dir/Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\my_algorithms.dir\Probabilistic_Analysis_and_Randomized_Algorithms\hiring_problem.cpp.obj -c "C:\Users\zy\Documents\GitHub\CLRS_CODE\Probabilistic Analysis and Randomized Algorithms\hiring_problem.cpp"

CMakeFiles/my_algorithms.dir/Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_algorithms.dir/Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\zy\Documents\GitHub\CLRS_CODE\Probabilistic Analysis and Randomized Algorithms\hiring_problem.cpp" > CMakeFiles\my_algorithms.dir\Probabilistic_Analysis_and_Randomized_Algorithms\hiring_problem.cpp.i

CMakeFiles/my_algorithms.dir/Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_algorithms.dir/Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\zy\Documents\GitHub\CLRS_CODE\Probabilistic Analysis and Randomized Algorithms\hiring_problem.cpp" -o CMakeFiles\my_algorithms.dir\Probabilistic_Analysis_and_Randomized_Algorithms\hiring_problem.cpp.s

# Object files for target my_algorithms
my_algorithms_OBJECTS = \
"CMakeFiles/my_algorithms.dir/main.cpp.obj" \
"CMakeFiles/my_algorithms.dir/sort_algorithms.cpp.obj" \
"CMakeFiles/my_algorithms.dir/divide-and-conquer.cpp.obj" \
"CMakeFiles/my_algorithms.dir/my_random.cpp.obj" \
"CMakeFiles/my_algorithms.dir/my_time_cost.cpp.obj" \
"CMakeFiles/my_algorithms.dir/Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.cpp.obj"

# External object files for target my_algorithms
my_algorithms_EXTERNAL_OBJECTS =

my_algorithms.exe: CMakeFiles/my_algorithms.dir/main.cpp.obj
my_algorithms.exe: CMakeFiles/my_algorithms.dir/sort_algorithms.cpp.obj
my_algorithms.exe: CMakeFiles/my_algorithms.dir/divide-and-conquer.cpp.obj
my_algorithms.exe: CMakeFiles/my_algorithms.dir/my_random.cpp.obj
my_algorithms.exe: CMakeFiles/my_algorithms.dir/my_time_cost.cpp.obj
my_algorithms.exe: CMakeFiles/my_algorithms.dir/Probabilistic_Analysis_and_Randomized_Algorithms/hiring_problem.cpp.obj
my_algorithms.exe: CMakeFiles/my_algorithms.dir/build.make
my_algorithms.exe: CMakeFiles/my_algorithms.dir/linklibs.rsp
my_algorithms.exe: CMakeFiles/my_algorithms.dir/objects1.rsp
my_algorithms.exe: CMakeFiles/my_algorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable my_algorithms.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\my_algorithms.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_algorithms.dir/build: my_algorithms.exe

.PHONY : CMakeFiles/my_algorithms.dir/build

CMakeFiles/my_algorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\my_algorithms.dir\cmake_clean.cmake
.PHONY : CMakeFiles/my_algorithms.dir/clean

CMakeFiles/my_algorithms.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\zy\Documents\GitHub\CLRS_CODE C:\Users\zy\Documents\GitHub\CLRS_CODE C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug C:\Users\zy\Documents\GitHub\CLRS_CODE\cmake-build-debug\CMakeFiles\my_algorithms.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_algorithms.dir/depend

