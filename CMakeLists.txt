cmake_minimum_required(VERSION 4.1)
project(EduAssist)

set(CMAKE_CXX_STANDARD 17)

add_executable(EduAssist main.cpp
        include/ProgressTracker.h
        src/ProgressTracker.cpp)
