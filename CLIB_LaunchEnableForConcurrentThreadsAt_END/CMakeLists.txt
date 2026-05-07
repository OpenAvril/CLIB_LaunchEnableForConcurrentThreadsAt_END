cmake_minimum_required(VERSION 3.20)
project(CLIB_LaunchEnableForConcurrentThreadsAt_END VERSION 1.0)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the library (STATIC or SHARED)
add_library(CLIB_LaunchEnableForConcurrentThreadsAt_END SHARED
        include/CLIB_LaunchEnableForConcurrentThreadsAt_END.h
        src/CLIB_LaunchEnableForConcurrentThreadsAt_END.cpp
        include/LaunchEnableForConcurrentThreadsAt_END.h
        src/LaunchEnableForConcurrentThreadsAt_END.cpp
        include/LaunchEnableForConcurrentThreadsAt_END_Control.h
        src/LaunchEnableForConcurrentThreadsAt_END_Control.cpp
        include/LaunchEnableForConcurrentThreadsAt_END_Framework.h
        src/LaunchEnableForConcurrentThreadsAt_END_Framework.cpp
        include/LaunchEnableForConcurrentThreadsAt_END_Global.h
        src/LaunchEnableForConcurrentThreadsAt_END_Global.cpp
)

# Define include directories for public headers
target_include_directories(CLIB_LaunchEnableForConcurrentThreadsAt_END PUBLIC include)
