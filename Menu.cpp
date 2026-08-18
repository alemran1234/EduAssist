#include "../include/Menu.h"
#include <iostream>

using namespace std;

void Menu::displayMainMenu()
{
    cout << "\n===== EduAssist =====\n";
    cout << "1. Student Profile\n";
    cout << "2. Scholarship\n";
    cout << "3. Study Planner\n";
    cout << "4. Expense Tracker\n";
    cout << "5. Resource Manager\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
}

void Menu::displayStudentMenu()
{
    cout << "\n===== Student Profile =====\n";
    cout << "1. Register\n";
    cout << "2. Login\n";
    cout << "3. View Profile\n";
    cout << "4. Edit Profile\n";
    cout << "0. Back\n";
    cout << "Enter your choice: ";
}

void Menu::displayScholarshipMenu()
{
    cout << "\n===== Scholarship =====\n";
    cout << "1. Add Scholarship\n";
    cout << "2. View Scholarship\n";
    cout << "3. Search Scholarship\n";
    cout << "0. Back\n";
    cout << "Enter your choice: ";
}

void Menu::displayStudyPlannerMenu()
{
    cout << "\n===== Study Planner =====\n";
    cout << "1. Add Task\n";
    cout << "2. View Task\n";
    cout << "3. Complete Task\n";
    cout << "0. Back\n";
    cout << "Enter your choice: ";
}

void Menu::displayExpenseMenu()
{
    cout << "\n===== Expense Tracker =====\n";
    cout << "1. Add Expense\n";
    cout << "2. View Expense\n";
    cout << "3. Search Expense\n";
    cout << "0. Back\n";
    cout << "Enter your choice: ";
}

void Menu::displayResourceMenu()
{
    cout << "\n===== Resource Manager =====\n";
    cout << "1. Add Resource\n";
    cout << "2. View Resource\n";
    cout << "0. Back\n";
    cout << "Enter your choice: ";
}