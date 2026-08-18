

#include "../include/EduAssist.h"
#include <iostream>

using namespace std;

void EduAssist::start()
{
    int choice;

    do
    {
        menu.displayMainMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                studentMenu();
                break;

            case 2:
                scholarshipMenu();
                break;

            case 3:
                studyPlannerMenu();
                break;

            case 4:
                expenseMenu();
                break;

            case 5:
                resourceMenu();
                break;

            case 0:
                cout << "\nExiting EduAssist...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);
}

void EduAssist::studentMenu()
{
    int choice;

    do
    {
        menu.displayStudentMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                student.registerStudent();
                break;

            case 2:
                student.login();
                break;

            case 3:
                student.viewProfile();
                break;

            case 4:
                student.editProfile();
                break;

            case 0:
                cout << "\nGoing back...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);
}

void EduAssist::scholarshipMenu()
{
    int choice;

    do
    {
        menu.displayScholarshipMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                scholarship.addScholarship();
                break;

            case 2:
                scholarship.viewScholarship();
                break;

            case 3:
                scholarship.searchScholarship();
                break;

            case 0:
                cout << "\nGoing back...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);
}

void EduAssist::studyPlannerMenu()
{
    int choice;

    do
    {
        menu.displayStudyPlannerMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                planner.addTask();
                break;

            case 2:
                planner.viewTasks();
                break;

            case 3:
                planner.completeTasks();
                break;

            case 0:
                cout << "\nGoing back...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);
}

void EduAssist::expenseMenu()
{
    int choice;

    do
    {
        menu.displayExpenseMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                expense.addExpense();
                break;

            case 2:
                expense.viewExpense();
                break;

            case 3:
                expense.searchExpense();
                break;

            case 0:
                cout << "\nGoing back...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);
}

void EduAssist::resourceMenu()
{
    int choice;

    do
    {
        menu.displayResourceMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                resource.addResource();
                break;

            case 2:
                resource.viewResource();
                break;

            case 0:
                cout << "\nGoing back...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);
}

