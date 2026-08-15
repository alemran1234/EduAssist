//
// Created by AL EMRAN on 8/9/2026.
//

#ifndef EDUASSIST_PROGRESSTRACKER_H
#define EDUASSIST_PROGRESSTRACKER_H
#include<iostream>
#include<fstream>
using namespace std;
class ProgressTracker {
    private:
    int studyhours;
    int completedtask;
public:
    void updateprogress();
    void showprogress();

};

#endif //EDUASSIST_PROGRESSTRACKER_H
