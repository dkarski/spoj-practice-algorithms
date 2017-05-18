cmake_minimum_required(VERSION 3.6)
project(eduSecond)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp "SpojPracticeAlgorithms.h"
        "List problems/Half of the half.cpp"
        "List problems/Character Patterns (Act 1).cpp"
        "List problems/Adding Reversed Numbers.cpp")
add_executable(eduSecond ${SOURCE_FILES})