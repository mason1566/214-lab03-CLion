cmake_minimum_required(VERSION 3.29)
project(Lab03)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab03 main.cpp
        Cards.h
        Utility.h
        Cards.cpp
        Utility.cpp)
