cmake_minimum_required(VERSION 3.10)
project(hw9)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(hw9 main.cpp "Student.h" "Course.h")