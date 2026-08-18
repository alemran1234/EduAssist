

#ifndef EDUASSIST_EDUASSIST_H
#define EDUASSIST_EDUASSIST_H

#include "Student.h"
#include "Scholarship.h"
#include "StudyPlanner.h"
#include "ExpensesTracker.h"
#include "ResourceManager.h"
#include "Menu.h"

class EduAssist
{
private:
    Student student;
    Scholarship scholarship;
    StudyPlanner planner;
    ExpenseTracker expense;
    ResourceManager resource;
    Menu menu;

    void studentMenu();
    void scholarshipMenu();
    void studyPlannerMenu();
    void expenseMenu();
    void resourceMenu();

public:
    void start();
};

#endif // EDUASSIST_EDUASSIST_H
