# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.15.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.15.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yianyao/Desktop/Game-Me2D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yianyao/Desktop/Game-Me2D/build

# Include any dependencies generated for this target.
include CMakeFiles/Me2D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Me2D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Me2D.dir/flags.make

CMakeFiles/Me2D.dir/src/Draw.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/Draw.cpp.o: ../src/Draw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Me2D.dir/src/Draw.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/Draw.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/Draw.cpp

CMakeFiles/Me2D.dir/src/Draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/Draw.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/Draw.cpp > CMakeFiles/Me2D.dir/src/Draw.cpp.i

CMakeFiles/Me2D.dir/src/Draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/Draw.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/Draw.cpp -o CMakeFiles/Me2D.dir/src/Draw.cpp.s

CMakeFiles/Me2D.dir/src/Engine.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/Engine.cpp.o: ../src/Engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Me2D.dir/src/Engine.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/Engine.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/Engine.cpp

CMakeFiles/Me2D.dir/src/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/Engine.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/Engine.cpp > CMakeFiles/Me2D.dir/src/Engine.cpp.i

CMakeFiles/Me2D.dir/src/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/Engine.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/Engine.cpp -o CMakeFiles/Me2D.dir/src/Engine.cpp.s

CMakeFiles/Me2D.dir/src/Input.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/Input.cpp.o: ../src/Input.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Me2D.dir/src/Input.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/Input.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/Input.cpp

CMakeFiles/Me2D.dir/src/Input.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/Input.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/Input.cpp > CMakeFiles/Me2D.dir/src/Input.cpp.i

CMakeFiles/Me2D.dir/src/Input.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/Input.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/Input.cpp -o CMakeFiles/Me2D.dir/src/Input.cpp.s

CMakeFiles/Me2D.dir/src/Player.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Me2D.dir/src/Player.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/Player.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/Player.cpp

CMakeFiles/Me2D.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/Player.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/Player.cpp > CMakeFiles/Me2D.dir/src/Player.cpp.i

CMakeFiles/Me2D.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/Player.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/Player.cpp -o CMakeFiles/Me2D.dir/src/Player.cpp.s

CMakeFiles/Me2D.dir/src/TextureHolder.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/TextureHolder.cpp.o: ../src/TextureHolder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Me2D.dir/src/TextureHolder.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/TextureHolder.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/TextureHolder.cpp

CMakeFiles/Me2D.dir/src/TextureHolder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/TextureHolder.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/TextureHolder.cpp > CMakeFiles/Me2D.dir/src/TextureHolder.cpp.i

CMakeFiles/Me2D.dir/src/TextureHolder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/TextureHolder.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/TextureHolder.cpp -o CMakeFiles/Me2D.dir/src/TextureHolder.cpp.s

CMakeFiles/Me2D.dir/src/Update.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/Update.cpp.o: ../src/Update.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Me2D.dir/src/Update.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/Update.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/Update.cpp

CMakeFiles/Me2D.dir/src/Update.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/Update.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/Update.cpp > CMakeFiles/Me2D.dir/src/Update.cpp.i

CMakeFiles/Me2D.dir/src/Update.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/Update.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/Update.cpp -o CMakeFiles/Me2D.dir/src/Update.cpp.s

CMakeFiles/Me2D.dir/src/Weapon.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/Weapon.cpp.o: ../src/Weapon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Me2D.dir/src/Weapon.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/Weapon.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/Weapon.cpp

CMakeFiles/Me2D.dir/src/Weapon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/Weapon.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/Weapon.cpp > CMakeFiles/Me2D.dir/src/Weapon.cpp.i

CMakeFiles/Me2D.dir/src/Weapon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/Weapon.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/Weapon.cpp -o CMakeFiles/Me2D.dir/src/Weapon.cpp.s

CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.o: ../src/Weapon_Bow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/Weapon_Bow.cpp

CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/Weapon_Bow.cpp > CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.i

CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/Weapon_Bow.cpp -o CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.s

CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.o: ../src/Weapon_Kanata.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/Weapon_Kanata.cpp

CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/Weapon_Kanata.cpp > CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.i

CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/Weapon_Kanata.cpp -o CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.s

CMakeFiles/Me2D.dir/src/fullpath.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/fullpath.cpp.o: ../src/fullpath.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Me2D.dir/src/fullpath.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/fullpath.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/fullpath.cpp

CMakeFiles/Me2D.dir/src/fullpath.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/fullpath.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/fullpath.cpp > CMakeFiles/Me2D.dir/src/fullpath.cpp.i

CMakeFiles/Me2D.dir/src/fullpath.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/fullpath.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/fullpath.cpp -o CMakeFiles/Me2D.dir/src/fullpath.cpp.s

CMakeFiles/Me2D.dir/src/main.cpp.o: CMakeFiles/Me2D.dir/flags.make
CMakeFiles/Me2D.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Me2D.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Me2D.dir/src/main.cpp.o -c /Users/yianyao/Desktop/Game-Me2D/src/main.cpp

CMakeFiles/Me2D.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Me2D.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yianyao/Desktop/Game-Me2D/src/main.cpp > CMakeFiles/Me2D.dir/src/main.cpp.i

CMakeFiles/Me2D.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Me2D.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yianyao/Desktop/Game-Me2D/src/main.cpp -o CMakeFiles/Me2D.dir/src/main.cpp.s

# Object files for target Me2D
Me2D_OBJECTS = \
"CMakeFiles/Me2D.dir/src/Draw.cpp.o" \
"CMakeFiles/Me2D.dir/src/Engine.cpp.o" \
"CMakeFiles/Me2D.dir/src/Input.cpp.o" \
"CMakeFiles/Me2D.dir/src/Player.cpp.o" \
"CMakeFiles/Me2D.dir/src/TextureHolder.cpp.o" \
"CMakeFiles/Me2D.dir/src/Update.cpp.o" \
"CMakeFiles/Me2D.dir/src/Weapon.cpp.o" \
"CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.o" \
"CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.o" \
"CMakeFiles/Me2D.dir/src/fullpath.cpp.o" \
"CMakeFiles/Me2D.dir/src/main.cpp.o"

# External object files for target Me2D
Me2D_EXTERNAL_OBJECTS =

Me2D: CMakeFiles/Me2D.dir/src/Draw.cpp.o
Me2D: CMakeFiles/Me2D.dir/src/Engine.cpp.o
Me2D: CMakeFiles/Me2D.dir/src/Input.cpp.o
Me2D: CMakeFiles/Me2D.dir/src/Player.cpp.o
Me2D: CMakeFiles/Me2D.dir/src/TextureHolder.cpp.o
Me2D: CMakeFiles/Me2D.dir/src/Update.cpp.o
Me2D: CMakeFiles/Me2D.dir/src/Weapon.cpp.o
Me2D: CMakeFiles/Me2D.dir/src/Weapon_Bow.cpp.o
Me2D: CMakeFiles/Me2D.dir/src/Weapon_Kanata.cpp.o
Me2D: CMakeFiles/Me2D.dir/src/fullpath.cpp.o
Me2D: CMakeFiles/Me2D.dir/src/main.cpp.o
Me2D: CMakeFiles/Me2D.dir/build.make
Me2D: /usr/local/lib/libsfml-graphics.2.5.1.dylib
Me2D: /usr/local/lib/libsfml-window.2.5.1.dylib
Me2D: /usr/local/lib/libsfml-network.2.5.1.dylib
Me2D: /usr/local/lib/libsfml-audio.2.5.1.dylib
Me2D: /usr/local/lib/libsfml-system.2.5.1.dylib
Me2D: CMakeFiles/Me2D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable Me2D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Me2D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Me2D.dir/build: Me2D

.PHONY : CMakeFiles/Me2D.dir/build

CMakeFiles/Me2D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Me2D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Me2D.dir/clean

CMakeFiles/Me2D.dir/depend:
	cd /Users/yianyao/Desktop/Game-Me2D/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yianyao/Desktop/Game-Me2D /Users/yianyao/Desktop/Game-Me2D /Users/yianyao/Desktop/Game-Me2D/build /Users/yianyao/Desktop/Game-Me2D/build /Users/yianyao/Desktop/Game-Me2D/build/CMakeFiles/Me2D.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Me2D.dir/depend

