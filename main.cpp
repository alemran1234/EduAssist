#include "include/Student.h"
#include "include/Scholarship.h"
#include "include/StudyPlanner.h"
#include "include/ExpensesTracker.h"
#include "include/ResourceManager.h"
#include "include/ProgressTracker.h"
#include<limits>
#include "include/Report.h"

using namespace std;

int main() {

    Student st;
    Scholarship s;
    StudyPlanner p;
    ExpenseTracker e;
    ResourceManager r;
    ProgressTracker pt;
    Report report;

    int choice;

    do {

        cout << "\n===== EduAssist =====\n";
        cout << "1. Student\n";
        cout << "2. Scholarship\n";
        cout << "3. Study Planner\n";
        cout << "4. Expense Tracker\n";
        cout << "5. Resource Manager\n";
        cout << "6. Progress Tracker\n";
        cout << "7. Report\n";
        cout << "0. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            // ================= STUDENT =================
            case 1: {
                int studentChoice;

                do {
                    cout << "\n===== Student =====\n";
                    cout << "1. Register Student\n";
                    cout << "2. Login\n";
                    cout << "3. View Profile\n";
                    cout << "4. Edit Profile\n";
                    cout << "0. Back\n";

                    cout << "Enter your choice: ";
                    cin >> studentChoice;

                    switch (studentChoice) {

                        case 1:
                            st.registerStudent();
                            break;

                        case 2:
                            st.login();
                            break;

                        case 3:
                            st.viewProfile();
                            break;

                        case 4:
                            st.editProfile();
                            break;

                        case 0:
                            cout << "\nGoing back...\n";
                            break;

                        default:
                            cout << "\nInvalid choice!\n";
                    }

                } while (studentChoice != 0);

                break;
            }


            // ================= SCHOLARSHIP =================
            case 2: {
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


            // ================= STUDY PLANNER =================
            case 3: {
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


            // ================= EXPENSE TRACKER =================
            case 4: {
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


            // ================= RESOURCE MANAGER =================
            case 5: {
                int resourceChoice;

                do {
                    cout << "\n===== Resource Manager =====\n";
                    cout << "1. Add Resource\n";
                    cout << "2. View Resource\n";
                    cout << "0. Back\n";

                    cout << "Enter your choice: ";
                    cin >> resourceChoice;

                    switch (resourceChoice) {

                        case 1:
                            r.addResource();
                            break;

                        case 2:
                            r.viewResource();
                            break;

                        case 0:
                            cout << "\nGoing back...\n";
                            break;

                        default:
                            cout << "\nInvalid choice!\n";
                    }

                } while (resourceChoice != 0);

                break;
            }


            // ================= PROGRESS TRACKER =================
            case 6: {
                int progressChoice;

                do {
                    cout << "\n===== Progress Tracker =====\n";
                    cout << "1. Update Progress\n";
                    cout << "2. Show Progress\n";
                    cout << "0. Back\n";

                    cout << "Enter your choice: ";
                    cin >> progressChoice;

                    switch (progressChoice) {

                        case 1:
                            pt.updateprogress();
                            break;

                        case 2:
                            pt.showprogress();
                            break;

                        case 0:
                            cout << "\nGoing back...\n";
                            break;

                        default:
                            cout << "\nInvalid choice!\n";
                    }

                } while (progressChoice != 0);

                break;
            }


            // ================= REPORT =================
            case 7:
            {
                Report report;

                string name;
                string id;
                double cgpa;
                int courses;

                cout << "\n===== Student Report =====\n";

                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Enter Student Name: ";
                getline(cin, name);

                cout << "Enter Student ID: ";
                getline(cin, id);

                cout << "Enter CGPA: ";
                cin >> cgpa;

                cout << "Enter Completed Courses: ";
                cin >> courses;

                report.setStudentInfo(name, id, cgpa, courses);

                report.generateFunction();

                break;
            }


            // ================= EXIT =================
            case 0:
                cout << "\nExiting EduAssist...\n";
                break;


            default:
                cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}