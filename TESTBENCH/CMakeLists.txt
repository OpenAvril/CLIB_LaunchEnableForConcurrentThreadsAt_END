cmake_minimum_required(VERSION 4.2.3)
project(TESTBENCH VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}../CLIB_LaunchQueForThreadsAt_END/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}../CLIB_LaunchQueForThreadsAt_END/libs/CLIB_WriteQueForThreadsAt_END_LaunchQueConditionCode/include)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}/libs)

add_executable(TESTBENCH main.cpp)

target_link_libraries(TESTBENCH PRIVATE libCLIB_LaunchQueForThreadsAt_END.a)
