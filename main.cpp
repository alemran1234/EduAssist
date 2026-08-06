#include "include/Scholarship.h"
#include "include/StudyPlanner.h"

using namespace std;

int main() {

    Scholarship s;
    StudyPlanner p;

    int choice;

    do {
        cout << "\n========== EduAssist ==========\n";
        cout << "1. Scholarship\n";
        cout << "2. Study Planner\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                int scholarshipChoice;

                do {
                    cout << "\n===== Scholarship Menu =====\n";
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
                            cout << "Returning to Main Menu...\n";
                            break;

                        default:
                            cout << "Invalid Choice!\n";
                    }

                } while (scholarshipChoice != 0);

                break;
            }

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
                            cout << "Returning to Main Menu...\n";
                            break;

                        default:
                            cout << "Invalid Choice!\n";
                    }

                } while (plannerChoice != 0);

                break;
            }

            case 0:
                cout << "\nThank you for using EduAssist!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 0);

    return 0;
}