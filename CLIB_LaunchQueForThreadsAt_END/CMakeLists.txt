cmake_minimum_required(VERSION 4.2.3)
project(CLIB_LaunchQueForThreadsAt_END VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_LaunchQueForThreadsAt_END STATIC
        src/CLIB_LaunchEnableForConcurrentThreadsAt_END.cpp
        src/LaunchEnableForConcurrentThreadsAt_END__Framework.cpp
        src/LaunchEnableForConcurrentThreadsAt_END__Global.cpp
        src/LaunchEnableForConcurrentThreadsAt_END__App.cpp
        src/LaunchEnableForConcurrentThreadsAt_END__App__Control.cpp
        src/LaunchEnableForConcurrentThreadsAt_END__Execute.cpp
        libs/CLIB_WriteQueForThreadsAt_END_LaunchQueConditionCode/src/CLIB_WriteEnableForThreadsAt_END_LaunchQueConditionCode.cpp
        libs/CLIB_WriteQueForThreadsAt_END_LaunchQueConditionCode/src/WriteEnableForThreadsAt_END_LaunchQueConditionCode__Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_END_LaunchQueConditionCode/src/WriteEnableForThreadsAt_END_LaunchQueConditionCode__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_END_LaunchQueConditionCode/src/WriteEnableForThreadsAt_END_LaunchQueConditionCode__App.cpp
        libs/CLIB_WriteQueForThreadsAt_END_LaunchQueConditionCode/src/WriteEnableForThreadsAt_END_LaunchQueConditionCode__Control.cpp
)

target_include_directories(CLIB_LaunchQueForThreadsAt_END PUBLIC
        libs/CLIB_WriteQueForThreadsAt_END_LaunchQueConditionCode/include
        include
)