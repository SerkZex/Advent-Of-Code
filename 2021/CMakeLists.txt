cmake_minimum_required(VERSION 3.21)
project(AoC2021)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

SET(AOClib
        aoc/macro.h
        aoc/aoc_string.h
        aoc/read_input.h
        aoc/checks.h
)

add_executable(${PROJECT_NAME}
        ${AOClib}
        dayxy.cpp
)