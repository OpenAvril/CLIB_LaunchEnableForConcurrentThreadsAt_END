# CLIB_LaunchEnableForConcurrentThreadsAt_END

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
### Ubuntu LINUX.
version: Ubuntu 24.04.4 LTS

### Visual Studio Code.
Version: 1.116.0.

### Dependencies.
#### GCC toolchain.
#### VS Code.

Terminal install of the above.
````
sudo apt install build-essential gdb
sudo snap install --classic code
````

---
## Building.
## Compiler Terminal Commands.
### LIB_LaunchEnableForConcurrentThreadsAt_CLIENT.so
````
g++ -fPIC -shared -o ./output/CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT.so ./CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT/CLIB_LaunchEnableForConcurrentThreadsAt_CLIENT.cpp
````

### LIB_LaunchEnableForConcurrentThreadsAt_SERVER.so
````
g++ -fPIC -shared -o ./output/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.so ./CLIB_LaunchEnableForConcurrentThreadsAt_SERVER/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.cpp
````

---
## How To Implement.
### How To Guide - Stack Flow From Client Input Scanner To Server And Back To Client.
 - GitHub ReadMe - How To Guide.

### Wrapper Imports and Native IO.
 - [Wrapper Imports and Native IO.](https://github.com/OpenAvril/CLIB_WriteQueForThreadsAt_STACK/blob/CLIB_WriteQueForThreadsAt_Stack/README/Import-Export%20Warpper(s).md)

***
## TestBench.
 
