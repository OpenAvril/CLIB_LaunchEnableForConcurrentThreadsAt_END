# OpenAvrilCLIB.
## Request, Wait, Launch Next Free Concurrent Thread.

---
## Branches.
 - CLIB_LaunchQueForThreadsAt_End.
 - CFSDImplementation_CLIB_LaunchQueForThreadsAt_End_WINDOWS
 - CFSDImplementation_CLIB_LaunchQueForThreadsAt_End_LINUX

---
### Similar Rewritten Repository.
 - https://github.com/cameron314/concurrentqueue

---
## Using.
### LINUX Ubuntu.
**version:** Ubuntu 24.04.4 LTS.

### IntelliJ IDEA.
**Version:** 2026.1.1

**Extensions:**
 - CMake.
 - CLion C and C++.

---
### Dependencies.
 #### - IntelliJ IDEA.
````
sudo snap install intellij-idea-ultimate --classic
````
 #### - C/C++ toolchain (compiler, debugger, and build system).
````
sudo apt update
sudo apt install build-essential cmake gcc g++ gdb
````
 #### - CLion.
````
 sudo snap install clion --classic
````

---
## Building - Compiler Terminal Commands.
### CLIB_OpenEpiCentre.so
````
g++ -fPIC -shared -o ./output/CLIB_OpenEpiCentre.so CLIB_OpenEpiCentre.h
````

---
## Building.
## Compiler Terminal Commands.
### LIB_LaunchEnableForConcurrentThreadsAt_END.so
````
g++ -fPIC -shared -o ./output/CLIB_LaunchEnableForConcurrentThreadsAt_END.so ./CLIB_LaunchEnableForConcurrentThreadsAt_END/CLIB_LaunchEnableForConcurrentThreadsAt_END.cpp
````

### LIB_LaunchEnableForConcurrentThreadsAt_SERVER.so
````
g++ -fPIC -shared -o ./output/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.so ./CLIB_LaunchEnableForConcurrentThreadsAt_SERVER/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.cpp
````

---
## How To Implement.
### How To Guide - Stack Flow From END Input Scanner To Server And Back To END.
 - GitHub ReadMe - How To Guide.

### Wrapper Imports and Native IO.
 - [Wrapper Imports and Native IO.](https://github.com/OpenAvril/CLIB_WriteQueForThreadsAt_STACK/blob/CLIB_WriteQueForThreadsAt_Stack/README/Import-Export%20Warpper(s).md)
