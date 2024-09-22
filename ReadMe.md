# Auto Incremement FW Version With Pre-Build Batch File
This script written in C and meant to accompany and IDE's pre-build command feature. The script is called via a batch file, compiled with gcc, and the exe is run which finds and increments the build version within a header file.

## How To Use
1. Construct a header file that defines a fw major, minor, bux, build, and complete version w/ pre-processor directive
2. Place this file in a scripts folder
3. Place the version header file the include folder with the rest of the header files. 
4. To find the version header file, this file will go back a directory, then look fora folder called `INC_DIRECTORY`. Within that folder it will look for a file called `FILENAME`. It will open the file if its found, otherwise it will print an error
5. Within the `FILENAME`, this file will scan line by line to look for a string `BUILD_VER_NAME`. If it finds this string it will increment the number next to that string. For example if it finds `#define FW_VERSION_BUILD 200`, it will overwrite the file to be `FW_VERSION_BUILD 201`
6. Make sure you update the `FILENAME`, `MAJOR_VER_NAME`, `MINOR_VER_NAME`, `BUGFIX_VER_NAME`, `BUILD_VER_NAME`, & `INC_DIRECTORY` fields to match the names in your project
7. The parsing delimiter is a space (" ") by default. So either put a space after `BUILD_VER_NAME` in your header file, or change the `const char delim[]` to match what you need

## Pre-Build Command
- Within the IDE open the project properities window
    - In Microchip Studio it can be found under: Project->Properties->Build Events->Pre-build event command line
    - In Keil it can be found under: Project->Options for Target->User tab
    - In STM32 Cube IDE it can be found under: Right click project->Properties->C++ Build->Settings->Build Steps
- Within the build event change directories to where the auto_increment batch file is located
- Run the batch file after changing directories while still within the pre-build command



