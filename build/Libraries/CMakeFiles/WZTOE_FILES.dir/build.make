﻿# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Master\SURF5\surf5-UW

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Master\SURF5\surf5-UW\build

# Include any dependencies generated for this target.
include Libraries\CMakeFiles\WZTOE_FILES.dir\depend.make
# Include any dependencies generated by the compiler for this target.
include Libraries\CMakeFiles\WZTOE_FILES.dir\compiler_depend.make

# Include the progress variables for this target.
include Libraries\CMakeFiles\WZTOE_FILES.dir\progress.make

# Include the compile flags for this target's objects.
include Libraries\CMakeFiles\WZTOE_FILES.dir\flags.make

Libraries\CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.obj: Libraries\CMakeFiles\WZTOE_FILES.dir\flags.make
Libraries\CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.obj: D:\Master\SURF5\surf5-UW\Libraries\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c
Libraries\CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.obj: Libraries\CMakeFiles\WZTOE_FILES.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Master\SURF5\surf5-UW\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Libraries/CMakeFiles/WZTOE_FILES.dir/W7500x_StdPeriph_Driver/src/w7500x_wztoe.c.obj"
	cd D:\Master\SURF5\surf5-UW\build\Libraries
	C:\PROGRA~2\GNUARM~1\102021~1.10\bin\AR19DD~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Libraries\CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.obj -MF CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.obj.d -o CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.obj -c D:\Master\SURF5\surf5-UW\Libraries\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c
	cd D:\Master\SURF5\surf5-UW\build

Libraries\CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/WZTOE_FILES.dir/W7500x_StdPeriph_Driver/src/w7500x_wztoe.c.i"
	cd D:\Master\SURF5\surf5-UW\build\Libraries
	C:\PROGRA~2\GNUARM~1\102021~1.10\bin\AR19DD~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Master\SURF5\surf5-UW\Libraries\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c > CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.i
	cd D:\Master\SURF5\surf5-UW\build

Libraries\CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/WZTOE_FILES.dir/W7500x_StdPeriph_Driver/src/w7500x_wztoe.c.s"
	cd D:\Master\SURF5\surf5-UW\build\Libraries
	C:\PROGRA~2\GNUARM~1\102021~1.10\bin\AR19DD~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Master\SURF5\surf5-UW\Libraries\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c -o CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.s
	cd D:\Master\SURF5\surf5-UW\build

Libraries\CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.obj: Libraries\CMakeFiles\WZTOE_FILES.dir\flags.make
Libraries\CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.obj: D:\Master\SURF5\surf5-UW\Libraries\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c
Libraries\CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.obj: Libraries\CMakeFiles\WZTOE_FILES.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Master\SURF5\surf5-UW\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object Libraries/CMakeFiles/WZTOE_FILES.dir/CMSIS/Device/WIZnet/W7500/Source/system_w7500x.c.obj"
	cd D:\Master\SURF5\surf5-UW\build\Libraries
	C:\PROGRA~2\GNUARM~1\102021~1.10\bin\AR19DD~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Libraries\CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.obj -MF CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.obj.d -o CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.obj -c D:\Master\SURF5\surf5-UW\Libraries\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c
	cd D:\Master\SURF5\surf5-UW\build

Libraries\CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/WZTOE_FILES.dir/CMSIS/Device/WIZnet/W7500/Source/system_w7500x.c.i"
	cd D:\Master\SURF5\surf5-UW\build\Libraries
	C:\PROGRA~2\GNUARM~1\102021~1.10\bin\AR19DD~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Master\SURF5\surf5-UW\Libraries\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c > CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.i
	cd D:\Master\SURF5\surf5-UW\build

Libraries\CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/WZTOE_FILES.dir/CMSIS/Device/WIZnet/W7500/Source/system_w7500x.c.s"
	cd D:\Master\SURF5\surf5-UW\build\Libraries
	C:\PROGRA~2\GNUARM~1\102021~1.10\bin\AR19DD~1.EXE $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Master\SURF5\surf5-UW\Libraries\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c -o CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.s
	cd D:\Master\SURF5\surf5-UW\build

# Object files for target WZTOE_FILES
WZTOE_FILES_OBJECTS = \
"CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.obj" \
"CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.obj"

# External object files for target WZTOE_FILES
WZTOE_FILES_EXTERNAL_OBJECTS =

Libraries\libWZTOE_FILES.a: Libraries\CMakeFiles\WZTOE_FILES.dir\W7500x_StdPeriph_Driver\src\w7500x_wztoe.c.obj
Libraries\libWZTOE_FILES.a: Libraries\CMakeFiles\WZTOE_FILES.dir\CMSIS\Device\WIZnet\W7500\Source\system_w7500x.c.obj
Libraries\libWZTOE_FILES.a: Libraries\CMakeFiles\WZTOE_FILES.dir\build.make
Libraries\libWZTOE_FILES.a: Libraries\CMakeFiles\WZTOE_FILES.dir\link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Master\SURF5\surf5-UW\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libWZTOE_FILES.a"
	cd D:\Master\SURF5\surf5-UW\build\Libraries
	$(CMAKE_COMMAND) -P CMakeFiles\WZTOE_FILES.dir\cmake_clean_target.cmake
	cd D:\Master\SURF5\surf5-UW\build
	cd D:\Master\SURF5\surf5-UW\build\Libraries
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\WZTOE_FILES.dir\link.txt --verbose=$(VERBOSE)
	cd D:\Master\SURF5\surf5-UW\build

# Rule to build all files generated by this target.
Libraries\CMakeFiles\WZTOE_FILES.dir\build: Libraries\libWZTOE_FILES.a
.PHONY : Libraries\CMakeFiles\WZTOE_FILES.dir\build

Libraries\CMakeFiles\WZTOE_FILES.dir\clean:
	cd D:\Master\SURF5\surf5-UW\build\Libraries
	$(CMAKE_COMMAND) -P CMakeFiles\WZTOE_FILES.dir\cmake_clean.cmake
	cd D:\Master\SURF5\surf5-UW\build
.PHONY : Libraries\CMakeFiles\WZTOE_FILES.dir\clean

Libraries\CMakeFiles\WZTOE_FILES.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\Master\SURF5\surf5-UW D:\Master\SURF5\surf5-UW\Libraries D:\Master\SURF5\surf5-UW\build D:\Master\SURF5\surf5-UW\build\Libraries D:\Master\SURF5\surf5-UW\build\Libraries\CMakeFiles\WZTOE_FILES.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : Libraries\CMakeFiles\WZTOE_FILES.dir\depend
