cmake_minimum_required(VERSION 4.2.3)
project(CLIB_LaunchQueForThreadsAt_ENDS VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_LaunchQueForThreadsAt_ENDS STATIC
        libs/CLIB_WriteQueForThreadsAt_ENDS_LaunchQueConditionCode/src/CLIB_WriteEnableForThreadsAt_ENDS_LaunchQueConditionCode.cpp
        libs/CLIB_WriteQueForThreadsAt_ENDS_LaunchQueConditionCode/src/WriteEnableForThreadsAt_ENDS_LaunchQueConditionCode_Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_ENDS_LaunchQueConditionCode/src/WriteEnableForThreadsAt_ENDS_LaunchQueConditionCode_Global.cpp
        libs/CLIB_WriteQueForThreadsAt_ENDS_LaunchQueConditionCode/src/WriteEnableForThreadsAt_ENDS_LaunchQueConditionCode_App.cpp
        libs/CLIB_WriteQueForThreadsAt_ENDS_LaunchQueConditionCode/src/WriteEnableForThreadsAt_ENDS_LaunchQueConditionCode_Control.cpp
        src/CLIB_LaunchEnableForConcurrentThreadsAt_ENDS.cpp
        src/LaunchEnableForConcurrentThreadsAt_ENDS_Framework.cpp
        src/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Global.cpp
        src/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_App.cpp
        src/LaunchEnableForConcurrentThreadsAt_ENDS_App_Control.cpp
        src/LaunchEnableForConcurrentThreadsAt_ENDS_Framework_Execute.cpp
)

target_include_directories(CLIB_LaunchQueForThreadsAt_ENDS PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
        "${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_WriteQueForThreadsAt_ENDS_LaunchQueConditionCode/include"
)

target_link_libraries(CLIB_LaunchQueForThreadsAt_ENDS PRIVATE

        CLIB_WriteQueForThreadsAt_ENDS_LaunchQueConditionCode
)