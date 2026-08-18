cmake_minimum_required(VERSION 4.1)

project(EduAssist)

set(CMAKE_CXX_STANDARD 17)

add_executable(EduAssist
        main.cpp

        include/ExpensesTracker.h
        src/ExpensesTracker.cpp

        include/ProgressTracker.h
        src/ProgressTracker.cpp

        include/Report.h
        src/Report.cpp

        include/ResourceManager.h
        src/ResourceManager.cpp

        include/Scholarship.h
        src/Scholarship.cpp

        include/Student.h
        src/Student.cpp

        include/StudyPlanner.h
        src/StudyPlanner.cpp
)

target_include_directories(EduAssist PRIVATE include)