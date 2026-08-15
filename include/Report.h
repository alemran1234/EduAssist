#ifndef REPORT_H
#define REPORT_H

#include <string>
using namespace std;

class Report
{
private:
    string studentName;
    string studentID;
    double cgpa;
    int completedCourses;

public:
    // Constructor
    Report();

    // Set student information
    void setStudentInfo(string name, string id, double cgpa, int courses);

    // Generate report
    void generateFunction();
};

#endif


