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
### Visual Studio Code.
Version: 1.116.0.

### Dependencies.
 - #### GCC toolchain.
````
sudo apt install build-essential gdb
````
 - #### VS Code.
````
sudo snap install --classic code
````
 - #### C/C++ Extension Pack.
````
code --install-extension ms-vscode.cpptools-extension-pack
````

---
## Building.
## Compiler Terminal Commands.
### LIB_LaunchEnableForConcurrentThreadsAt_END.so
````
g++ -fPIC -shared -o ./output/CLIB_LaunchEnableForConcurrentThreadsAt_END.so ./CLIB_LaunchEnableForConcurrentThreadsAt_END/CLIB_LaunchEnableForConcurrentThreadsAt_END/CLIB_LaunchEnableForConcurrentThreadsAt_END.cpp
````

### LIB_LaunchEnableForConcurrentThreadsAt_SERVER.so
````
g++ -fPIC -shared -o ./output/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.so ./CLIB_LaunchEnableForConcurrentThreadsAt_SERVER/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER/CLIB_LaunchEnableForConcurrentThreadsAt_SERVER.cpp
````

---
## How To Implement.
### How To Guide - Stack Flow From END Input Scanner To Server And Back To END.
 - GitHub ReadMe - How To Guide.

#### CLIB_LaunchQue
 - edit four lines of code that have the comment "//todo: number of concurrent threads." with applied number of threads for concurrency.

---
### Wrapper Imports and Native IO.
 - [Wrapper Imports and Native IO.](https://github.com/OpenAvril/CLIB_WriteQueForThreadsAt_STACK/blob/CLIB_WriteQueForThreadsAt_Stack/README/Import-Export%20Warpper(s).md)

---
---