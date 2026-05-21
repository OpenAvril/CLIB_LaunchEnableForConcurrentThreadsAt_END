cmake_minimum_required(VERSION 4.2)
project(CLIB_LaunchQueForThreadsAt_END)

set(CMAKE_CXX_STANDARD 20)

add_library(CLIB_LaunchQueForThreadsAt_END STATIC
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
