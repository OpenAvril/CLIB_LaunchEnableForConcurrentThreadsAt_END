# OpenAvrilCLIB.
## Request, Wait, Launch Next Free Concurrent Thread.

---
## Branches.
 - **CLIB_LaunchQueForThreadsAt_End.**
 - CFSDImplementation_CLIB.

---
### Similar Rewritten Repository.
 - https://github.com/cameron314/concurrentqueue

---
## Using.
### LINUX Ubuntu.
**version:** Ubuntu 24.04.4 LTS.

### IntelliJ IDEA.
**Version:** 2026.1.1

---
### Dependencies.
#### - GCC toolchain.
````
sudo apt install build-essential gdb -y
````
#### - CMake.
````
sudo apt install cmake
````
#### - snap.
````
sudo apt install snapd
````

#### - IntelliJ IDEA.
````
sudo snap install intellij-idea-ultimate --classic
````
**Plugins - Marketplace.**
 - Native Build Tools.
 - CMake.
 - CLoin C and C++.

---
## Building - Compiler Terminal Commands.
### CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT.so
````
g++ -fPIC -shared -o ./output/CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT.so ./src/CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT.cpp
````
### CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.so
````
g++ -fPIC -shared -o ./output/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.so ./src/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.cpp
````

---
## How To Implement.
### How To Guide - Stack Flow From END Input Scanner To Server And Back To END.
 - GitHub ReadMe - How To Guide.

### Wrapper Imports and Native IO.
 - [Wrapper Imports and Native IO.](https://github.com/OpenAvril/CLIB_WriteQueForThreadsAt_STACK/blob/CLIB_WriteQueForThreadsAt_Stack/README/Import-Export%20Warpper(s).md)
