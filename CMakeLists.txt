cmake_minimum_required(VERSION 3.6)
project(learn)
set(CMAKE_CXX_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c read.c)
add_executable(learn ${SOURCE_FILES})