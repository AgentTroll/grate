cmake_minimum_required(VERSION 3.10)
project(c_grate)
project(cpp_grate)

set(CMAKE_CXX_STANDARD 11)

add_executable(c_grate main.cpp lib/arithmetic.h impl/arithmetic.c)
add_executable(cpp_grate main.cpp lib/arithmetic.h impl/arithmetic.cpp)
