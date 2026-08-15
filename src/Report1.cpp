//#include "Report.h"
#include <iostream>

using namespace std;

// Constructor
Report::Report()
{
    studentName = "";
    studentID = "";
    cgpa = 0.0;
    completedCourses = 0;
}

// Set student information
void Report::setStudentInfo(string name, string id, double cgpa, int courses)
{
    studentName = name;
    studentID = id;
    this->cgpa = cgpa;
    completedCourses = courses;
}

// Generate report
void Report::generateFunction()
{
    cout << "\n====================================\n";
    cout << "          EDUassist Report\n";
    cout << "====================================\n";

    cout << "Student Name      : " << studentName << endl;
    cout << "Student ID        : " << studentID << endl;
    cout << "CGPA              : " << cgpa << endl;
    cout << "Completed Courses : " << completedCourses << endl;

    cout << "------------------------------------\n";

    if (cgpa >= 3.50)
    {
        cout << "Academic Status   : Excellent" << endl;
    }
    else if (cgpa >= 3.00)
    {
        cout << "Academic Status   : Good" << endl;
    }
    else if (cgpa >= 2.00)
    {
        cout << "Academic Status   : Satisfactory" << endl;
    }
    else
    {
        cout << "Academic Status   : Needs Improvement" << endl;
    }

    cout << "====================================\n";
}
