# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Desktop\POO Projetos\Aula_Pratica_8"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Desktop\POO Projetos\Aula_Pratica_8\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Aula_Pratica_8.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Aula_Pratica_8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Aula_Pratica_8.dir/flags.make

CMakeFiles/Aula_Pratica_8.dir/main.cpp.obj: CMakeFiles/Aula_Pratica_8.dir/flags.make
CMakeFiles/Aula_Pratica_8.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Desktop\POO Projetos\Aula_Pratica_8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Aula_Pratica_8.dir/main.cpp.obj"
	C:\win-builds\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Aula_Pratica_8.dir\main.cpp.obj -c "D:\Desktop\POO Projetos\Aula_Pratica_8\main.cpp"

CMakeFiles/Aula_Pratica_8.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Aula_Pratica_8.dir/main.cpp.i"
	C:\win-builds\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Desktop\POO Projetos\Aula_Pratica_8\main.cpp" > CMakeFiles\Aula_Pratica_8.dir\main.cpp.i

CMakeFiles/Aula_Pratica_8.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Aula_Pratica_8.dir/main.cpp.s"
	C:\win-builds\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Desktop\POO Projetos\Aula_Pratica_8\main.cpp" -o CMakeFiles\Aula_Pratica_8.dir\main.cpp.s

# Object files for target Aula_Pratica_8
Aula_Pratica_8_OBJECTS = \
"CMakeFiles/Aula_Pratica_8.dir/main.cpp.obj"

# External object files for target Aula_Pratica_8
Aula_Pratica_8_EXTERNAL_OBJECTS =

Aula_Pratica_8.exe: CMakeFiles/Aula_Pratica_8.dir/main.cpp.obj
Aula_Pratica_8.exe: CMakeFiles/Aula_Pratica_8.dir/build.make
Aula_Pratica_8.exe: CMakeFiles/Aula_Pratica_8.dir/linklibs.rsp
Aula_Pratica_8.exe: CMakeFiles/Aula_Pratica_8.dir/objects1.rsp
Aula_Pratica_8.exe: CMakeFiles/Aula_Pratica_8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Desktop\POO Projetos\Aula_Pratica_8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Aula_Pratica_8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Aula_Pratica_8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Aula_Pratica_8.dir/build: Aula_Pratica_8.exe
.PHONY : CMakeFiles/Aula_Pratica_8.dir/build

CMakeFiles/Aula_Pratica_8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Aula_Pratica_8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Aula_Pratica_8.dir/clean

CMakeFiles/Aula_Pratica_8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Desktop\POO Projetos\Aula_Pratica_8" "D:\Desktop\POO Projetos\Aula_Pratica_8" "D:\Desktop\POO Projetos\Aula_Pratica_8\cmake-build-debug" "D:\Desktop\POO Projetos\Aula_Pratica_8\cmake-build-debug" "D:\Desktop\POO Projetos\Aula_Pratica_8\cmake-build-debug\CMakeFiles\Aula_Pratica_8.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Aula_Pratica_8.dir/depend

