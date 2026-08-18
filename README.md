# EduAssist

EduAssist is a C++ console-based student assistance system designed to help students manage their academic activities, scholarships, study plans, expenses, resources, progress, and student information in one place.

## Features

### 1. Student Management
- Student registration
- Student login
- Multiple student accounts
- View student profile
- Edit student profile

### 2. Scholarship Management
- Add scholarship information
- View available scholarships
- Search scholarships by name
- Store scholarship information using file handling

### 3. Study Planner
- Add study tasks
- View study tasks
- Mark tasks as completed
- Track pending and completed tasks

### 4. Expense Tracker
- Add expenses
- View expense records
- Search expenses by category
- Calculate total expenses

### 5. Resource Manager
- Add academic resources
- View available resources
- Store useful study links

### 6. Progress Tracker
- Record study hours
- Record completed tasks
- View academic progress

### 7. Student Report
- Student information
- Academic summary
- CGPA
- Completed courses
- Study planner summary
- Progress summary
- Expense summary
- Scholarship summary
- Resource summary
- Overall academic status

## Technologies Used

- C++
- Object-Oriented Programming (OOP)
- File Handling
- CMake
- CLion
- Git & GitHub

## Project Structure

```text
EduAssist/
│
├── include/
│   ├── Student.h
│   ├── Scholarship.h
│   ├── StudyPlanner.h
│   ├── ExpensesTracker.h
│   ├── ResourceManager.h
│   ├── ProgressTracker.h
│   └── Report.h
│
├── src/
│   ├── Student.cpp
│   ├── Scholarship.cpp
│   ├── StudyPlanner.cpp
│   ├── ExpensesTracker.cpp
│   ├── ResourceManager.cpp
│   ├── ProgressTracker.cpp
│   └── Report.cpp
│
├── main.cpp
├── CMakeLists.txt
└── README.md
```
## How to Run

### Using CLion

1. Clone or download the repository.
2. Open the project in CLion.
3. Make sure CMake is configured correctly.
4. Build the project.
5. Run the `EduAssist` executable.

### Using Terminal

```bash
mkdir build
cd build
cmake ..
cmake --build .
```
Then run the generated executable.
## Main Menu
```text
===== EduAssist =====

1. Student
2. Scholarship
3. Study Planner
4. Expense Tracker
5. Resource Manager
6. Progress Tracker
7. Report
0. Exit
```
## File Handling
EduAssist uses text files to store data locally.
## Team Project
EduAssist id developed as a collaborative C++ project using Git and Github.
## Project Goals
1.Build a practical student management system.
2.Learn modular software development.
3.Practice Git and Github collaboration.
## Future Improvements
1.GUI-based interface.
2.Database integration.
3.Automatic Student report generation.
4.Deadline notification.
5.Expense statistics and charts
6.Scolarship deadline alerts
7.Web/mobile version
## Author
EduAssist Team
## License
This project is developed for educational purposes.
