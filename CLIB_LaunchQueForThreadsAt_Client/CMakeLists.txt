cmake_minimum_required(VERSION 4.2.3)
project(CLIB_LaunchQueForThreadsAt_Client VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_LaunchQueForThreadsAt_Client STATIC
        libs/CLIB_WriteQueForThreadsAt_Client_LaunchQueConditionCode/src/CLIB_WriteEnableForThreadsAt_Client_LaunchQueConditionCode.cpp
        libs/CLIB_WriteQueForThreadsAt_Client_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_Client_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Global.cpp
        libs/CLIB_WriteQueForThreadsAt_Client_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__App.cpp
        libs/CLIB_WriteQueForThreadsAt_Client_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Client_LaunchQueConditionCode__Control.cpp
        src/CLIB_LaunchEnableForConcurrentThreadsAt_Client.cpp
        src/LaunchEnableForConcurrentThreadsAt_Client__Framework.cpp
        src/LaunchEnableForConcurrentThreadsAt_Client__Global.cpp
        src/LaunchEnableForConcurrentThreadsAt_Client__App.cpp
        src/LaunchEnableForConcurrentThreadsAt_Client__App__Control.cpp
        src/LaunchEnableForConcurrentThreadsAt_Client__Execute.cpp
)

target_include_directories(CLIB_LaunchQueForThreadsAt_Client PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
        "${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_WriteQueForThreadsAt_Client_LaunchQueConditionCode/include"
)

target_link_libraries(CLIB_LaunchQueForThreadsAt_Client PRIVATE

        CLIB_WriteQueForThreadsAt_Client_LaunchQueConditionCode
)