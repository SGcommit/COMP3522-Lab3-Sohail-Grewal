cmake_minimum_required(VERSION 3.29)
project(lab3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
set(CMAKE_CXX_STANDARD 20)

add_executable(lab3 main.cpp
        myStack.cpp
        myStack.hpp
        myStack.cpp
        catch.hpp
        unit_tests.cpp)
