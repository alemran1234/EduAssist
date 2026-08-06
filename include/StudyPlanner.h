//
// Created by AL EMRAN on 8/6/2026.
//

#ifndef EDUASSIST_STUDYPLANNER_H
#define EDUASSIST_STUDYPLANNER_H
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class StudyPlanner {
    private:
    string taskName;
    string date;
    string status;
    public:
    void addTask();
    void viewTasks();
    void completeTasks();
};

#endif //EDUASSIST_STUDYPLANNER_H
