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

**Extensions:**
 - CMake.
 - CLion C and C++.
 - Compilation Database.

---
### Dependencies.
#### - IntelliJ IDEA. (https://www.jetbrains.com/idea/download/?section=linux)
````

````
#### - C/C++ toolchain (compiler, debugger, and build system).
````

````
#### - Native Build Tools. (https://plugins.jetbrains.com/plugin/28796-native-build-tools)
````

````
#### - CMake. (https://plugins.jetbrains.com/plugin/28794-cmake)
````

````
#### - CLion. (https://plugins.jetbrains.com/plugin/28804-clion-c-and-c-)
````

````

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
