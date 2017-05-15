cmake_minimum_required(VERSION 3.6)
project(eduSecond)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp "SpojPracticeAlgorithms.h"
        "List problems/Half of the half.cpp")
add_executable(eduSecond ${SOURCE_FILES})