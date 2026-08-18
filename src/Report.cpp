#include "../include/Report.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Report::Report()
{
    studentName = "";
    studentID = "";
    cgpa = 0.0;
    completedCourses = 0;
}

void Report::setStudentInfo(string name, string id, double cgpa, int courses)
{
    studentName = name;
    studentID = id;
    this->cgpa = cgpa;
    completedCourses = courses;
}

void Report::generateFunction()
{
    // =========================
    // Study Planner Summary
    // =========================

    int totalTasks = 0;
    int completedTasks = 0;
    int pendingTasks = 0;

    ifstream studyFile("StudyPlanner.txt");

    if (studyFile.is_open())
    {
        string taskName;
        string date;
        string status;
        string separator;

        while (getline(studyFile, taskName))
        {
            if (!getline(studyFile, date))
                break;

            if (!getline(studyFile, status))
                break;

            getline(studyFile, separator);

            totalTasks++;

            if (status == "completed")
                completedTasks++;
            else
                pendingTasks++;
        }

        studyFile.close();
    }


    // =========================
    // Progress Summary
    // =========================

    int totalStudyHours = 0;
    int progressCompletedTasks = 0;

    ifstream progressFile("progress.txt");

    if (progressFile.is_open())
    {
        string hoursLine;
        string taskLine;
        string separator;

        while (getline(progressFile, hoursLine))
        {
            if (!getline(progressFile, taskLine))
                break;

            getline(progressFile, separator);

            try
            {
                totalStudyHours += stoi(hoursLine);
                progressCompletedTasks += stoi(taskLine);
            }
            catch (...)
            {
                // Ignore invalid data
            }
        }

        progressFile.close();
    }


    // =========================
    // Expense Summary
    // =========================

    double totalExpense = 0.0;
    int expenseCount = 0;

    ifstream expenseFile("expenses.txt");

    if (expenseFile.is_open())
    {
        string category;
        string amount;
        string date;
        string separator;

        while (getline(expenseFile, category))
        {
            if (!getline(expenseFile, amount))
                break;

            if (!getline(expenseFile, date))
                break;

            getline(expenseFile, separator);

            try
            {
                totalExpense += stod(amount);
                expenseCount++;
            }
            catch (...)
            {
                // Ignore invalid amount
            }
        }

        expenseFile.close();
    }


    // =========================
    // Scholarship Summary
    // =========================

    int scholarshipCount = 0;

    ifstream scholarshipFile("scholarship.txt");

    if (scholarshipFile.is_open())
    {
        string name;
        string country;
        string cgpaLine;
        string deadline;
        string separator;

        while (getline(scholarshipFile, name))
        {
            if (!getline(scholarshipFile, country))
                break;

            if (!getline(scholarshipFile, cgpaLine))
                break;

            if (!getline(scholarshipFile, deadline))
                break;

            getline(scholarshipFile, separator);

            scholarshipCount++;
        }

        scholarshipFile.close();
    }


    // =========================
    // Resource Summary
    // =========================

    int resourceCount = 0;

    ifstream resourceFile("resources.txt");

    if (resourceFile.is_open())
    {
        string line;

        while (getline(resourceFile, line))
        {
            if (!line.empty() && line != "--------------")
            {
                resourceCount++;
            }
        }

        resourceFile.close();
    }


    // =========================
    // Generate Full Report
    // =========================

    cout << "\n";
    cout << "====================================================\n";
    cout << "              EDUASSIST STUDENT REPORT\n";
    cout << "====================================================\n";

    cout << "\n----- STUDENT INFORMATION -----\n";
    cout << "Student Name       : " << studentName << endl;
    cout << "Student ID         : " << studentID << endl;

    cout << "\n----- ACADEMIC SUMMARY -----\n";
    cout << "CGPA               : " << cgpa << endl;
    cout << "Completed Courses  : " << completedCourses << endl;

    cout << "\n----- STUDY PLANNER -----\n";
    cout << "Total Tasks        : " << totalTasks << endl;
    cout << "Completed Tasks    : " << completedTasks << endl;
    cout << "Pending Tasks      : " << pendingTasks << endl;

    cout << "\n----- PROGRESS TRACKER -----\n";
    cout << "Total Study Hours  : " << totalStudyHours << endl;
    cout << "Completed Tasks    : " << progressCompletedTasks << endl;

    cout << "\n----- EXPENSE TRACKER -----\n";
    cout << "Total Expenses     : " << expenseCount << endl;
    cout << "Total Amount       : " << totalExpense << " Taka" << endl;

    cout << "\n----- SCHOLARSHIP -----\n";
    cout << "Available Scholarships : "
         << scholarshipCount << endl;

    cout << "\n----- RESOURCE MANAGER -----\n";
    cout << "Resources Available : "
         << resourceCount << endl;

    cout << "\n----- OVERALL ACADEMIC STATUS -----\n";

    if (cgpa >= 3.50)
    {
        cout << "Status             : Excellent\n";
    }
    else if (cgpa >= 3.00)
    {
        cout << "Status             : Good\n";
    }
    else if (cgpa >= 2.00)
    {
        cout << "Status             : Satisfactory\n";
    }
    else
    {
        cout << "Status             : Needs Improvement\n";
    }

    cout << "\n====================================================\n";
    cout << "              END OF STUDENT REPORT\n";
    cout << "====================================================\n";
}