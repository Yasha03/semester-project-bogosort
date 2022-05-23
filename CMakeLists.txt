cmake_minimum_required(VERSION 3.21)
project(bogosort)

set(CMAKE_CXX_STANDARD 17)

add_executable(bogosort main.cpp src/BogoSort.h src/Tester.cpp src/Tester.h)
