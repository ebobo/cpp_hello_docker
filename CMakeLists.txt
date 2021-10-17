cmake_minimum_required(VERSION 3.5)

project(HelloQi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package( Threads )
add_executable(HelloQi main.cpp)
target_link_libraries( HelloQi ${CMAKE_THREAD_LIBS_INIT} )