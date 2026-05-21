cmake_minimum_required(VERSION 4.2)
project(CLIB_LaunchQueForThreadsAt_Server)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_LaunchQueForThreadsAt_Server STATIC
        include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h
        src/CLIB_LaunchEnableForConcurrentThreadsAt_Server.cpp
        include/LaunchEnableForConcurrentThreadsAt_Server.h
        src/LaunchEnableForConcurrentThreadsAt_Server.cpp
        include/LaunchEnableForConcurrentThreadsAt_Server_Control.h
        src/LaunchEnableForConcurrentThreadsAt_Server_Control.cpp
        include/LaunchEnableForConcurrentThreadsAt_Server_Framework.h
        src/LaunchEnableForConcurrentThreadsAt_Server_Framework.cpp
        include/LaunchEnableForConcurrentThreadsAt_Server_Global.h
        src/LaunchEnableForConcurrentThreadsAt_Server_Global.cpp
)
