# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /opt/local/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/antonin/CVSROOT/QtTuto/widgets

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/antonin/CVSROOT/QtTuto/widgets/qtcreator-build

# Include any dependencies generated for this target.
include CMakeFiles/widget.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/widget.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/widget.dir/flags.make

CMakeFiles/widget.dir/main.cpp.o: CMakeFiles/widget.dir/flags.make
CMakeFiles/widget.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/antonin/CVSROOT/QtTuto/widgets/qtcreator-build/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Building CXX object CMakeFiles/widget.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/widget.dir/main.cpp.o -c /Users/antonin/CVSROOT/QtTuto/widgets/main.cpp

CMakeFiles/widget.dir/main.cpp.i: cmake_force
	@echo "Preprocessing CXX source to CMakeFiles/widget.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /Users/antonin/CVSROOT/QtTuto/widgets/main.cpp > CMakeFiles/widget.dir/main.cpp.i

CMakeFiles/widget.dir/main.cpp.s: cmake_force
	@echo "Compiling CXX source to assembly CMakeFiles/widget.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /Users/antonin/CVSROOT/QtTuto/widgets/main.cpp -o CMakeFiles/widget.dir/main.cpp.s

CMakeFiles/widget.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/widget.dir/main.cpp.o.requires

CMakeFiles/widget.dir/main.cpp.o.provides: CMakeFiles/widget.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/widget.dir/build.make CMakeFiles/widget.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/widget.dir/main.cpp.o.provides

CMakeFiles/widget.dir/main.cpp.o.provides.build: CMakeFiles/widget.dir/main.cpp.o
.PHONY : CMakeFiles/widget.dir/main.cpp.o.provides.build

# Object files for target widget
widget_OBJECTS = \
"CMakeFiles/widget.dir/main.cpp.o"

# External object files for target widget
widget_EXTERNAL_OBJECTS =

widget: CMakeFiles/widget.dir/main.cpp.o
widget: CMakeFiles/widget.dir/build.make
widget: CMakeFiles/widget.dir/link.txt
	@echo "Linking CXX executable widget"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/widget.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/widget.dir/build: widget
.PHONY : CMakeFiles/widget.dir/build

CMakeFiles/widget.dir/requires: CMakeFiles/widget.dir/main.cpp.o.requires
.PHONY : CMakeFiles/widget.dir/requires

CMakeFiles/widget.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/widget.dir/cmake_clean.cmake
.PHONY : CMakeFiles/widget.dir/clean

CMakeFiles/widget.dir/depend:
	cd /Users/antonin/CVSROOT/QtTuto/widgets/qtcreator-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/antonin/CVSROOT/QtTuto/widgets /Users/antonin/CVSROOT/QtTuto/widgets /Users/antonin/CVSROOT/QtTuto/widgets/qtcreator-build /Users/antonin/CVSROOT/QtTuto/widgets/qtcreator-build /Users/antonin/CVSROOT/QtTuto/widgets/qtcreator-build/CMakeFiles/widget.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/widget.dir/depend
