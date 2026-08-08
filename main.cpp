#include "include/Scholarship.h"
#include "include/StudyPlanner.h"
#include "include/ExpensesTracker.h"

using namespace std;

int main() {

    Scholarship s;
    StudyPlanner p;
    ExpenseTracker e;

    int choice;

    do {

        cout << "\n===== EduAssist =====\n";
        cout << "1. Scholarship\n";
        cout << "2. Study Planner\n";
        cout << "3. Expense Tracker\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            // =========================
            // Scholarship
            // =========================
            case 1: {

                int scholarshipChoice;

                do {

                    cout << "\n===== Scholarship =====\n";
                    cout << "1. Add Scholarship\n";
                    cout << "2. View Scholarship\n";
                    cout << "3. Search Scholarship\n";
                    cout << "0. Back\n";

                    cout << "Enter your choice: ";
                    cin >> scholarshipChoice;

                    switch (scholarshipChoice) {

                        case 1:
                            s.addScholarship();
                            break;

                        case 2:
                            s.viewScholarship();
                            break;

                        case 3:
                            s.searchScholarship();
                            break;

                        case 0:
                            cout << "\nGoing back...\n";
                            break;

                        default:
                            cout << "\nInvalid choice!\n";
                    }

                } while (scholarshipChoice != 0);

                break;
            }


            // =========================
            // Study Planner
            // =========================
            case 2: {

                int plannerChoice;

                do {

                    cout << "\n===== Study Planner =====\n";
                    cout << "1. Add Task\n";
                    cout << "2. View Task\n";
                    cout << "3. Complete Task\n";
                    cout << "0. Back\n";

                    cout << "Enter your choice: ";
                    cin >> plannerChoice;

                    switch (plannerChoice) {

                        case 1:
                            p.addTask();
                            break;

                        case 2:
                            p.viewTasks();
                            break;

                        case 3:
                            p.completeTasks();
                            break;

                        case 0:
                            cout << "\nGoing back...\n";
                            break;

                        default:
                            cout << "\nInvalid choice!\n";
                    }

                } while (plannerChoice != 0);

                break;
            }


            // =========================
            // Expense Tracker
            // =========================
            case 3: {

                int expenseChoice;

                do {

                    cout << "\n===== Expense Tracker =====\n";
                    cout << "1. Add Expense\n";
                    cout << "2. View Expense\n";
                    cout << "3. Search Expense\n";
                    cout << "0. Back\n";

                    cout << "Enter your choice: ";
                    cin >> expenseChoice;

                    switch (expenseChoice) {

                        case 1:
                            e.addExpense();
                            break;

                        case 2:
                            e.viewExpense();
                            break;

                        case 3:
                            e.searchExpense();
                            break;

                        case 0:
                            cout << "\nGoing back...\n";
                            break;

                        default:
                            cout << "\nInvalid choice!\n";
                    }

                } while (expenseChoice != 0);

                break;
            }


            // =========================
            // Exit
            // =========================
            case 0:
                cout << "\nExiting EduAssist...\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}