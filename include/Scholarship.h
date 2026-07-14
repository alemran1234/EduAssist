//
// Created by AL EMRAN on 7/14/2026.
//

#ifndef EDUASSIST_SCOLARSHIP_H
#define EDUASSIST_SCOLARSHIP_H
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Scholarship {
    private:
    string scholarshipName;
    string country;
    double minCGPA;
    string deadline;
    public:
    void addScholarship();
    void viewScholarship();
    void searchScholarship();
};

#endif //EDUASSIST_SCOLARSHIP_H