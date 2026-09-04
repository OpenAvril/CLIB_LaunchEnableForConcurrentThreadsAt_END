cmake_minimum_required(VERSION 4.2.3)
project(CLIB_LaunchQueForThreadsAt_END VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)



add_library(CLIB_LaunchQueForThreadsAt_END STATIC
        include/CLIB_LaunchEnableForConcurrentThreadsAt_END.h
        src/CLIB_LaunchEnableForConcurrentThreadsAt_END.cpp
        include/LaunchEnableForConcurrentThreadsAt_END__App.h
        src/LaunchEnableForConcurrentThreadsAt_END__App.cpp
        include/LaunchEnableForConcurrentThreadsAt_END__App__Control.h
        src/LaunchEnableForConcurrentThreadsAt_END__App__Control.cpp
        include/LaunchEnableForConcurrentThreadsAt_END__Execute.h
        src/LaunchEnableForConcurrentThreadsAt_END__Execute.cpp
        include/LaunchEnableForConcurrentThreadsAt_END__Framework.h
        src/LaunchEnableForConcurrentThreadsAt_END__Framework.cpp
        include/LaunchEnableForConcurrentThreadsAt_END__Global.h
        src/LaunchEnableForConcurrentThreadsAt_END__Global.cpp
)

target_include_directories(CLIB_LaunchQueForThreadsAt_END PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_link_libraries(CLIB_LaunchQueForThreadsAt_END PRIVATE CLIB_WriteQueForThreadsAt_END_LaunchQueConditionCode)