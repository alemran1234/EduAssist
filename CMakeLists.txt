cmake_minimum_required(VERSION 4.1)
project(EduAssist)

set(CMAKE_CXX_STANDARD 17)

add_executable(EduAssist main.cpp
        include/Scholarship.h
        src/Scholarship.cpp
        include/Studyplanner.h
        src/Studyplanner.cpp
        include/ExpensesTracker.h
        src/ExpensesTracker.cpp
        include/ResourceManager.h
        src/ResourceManager.cpp
)
