//
// Created by AL EMRAN on 8/8/2026.
//
#include"../include/ExpensesTracker.h"
void ExpenseTracker::addExpense() {
    cout<<"Enter Expense Category: ";
    cin.ignore();
    getline(cin,category);
    cout<<"Enter Amount: ";
    cin>>amount;
    cin.ignore();
    cout<<"Enter date: ";
    getline(cin,date);
    ofstream file("expenses.txt",ios::app);
    if (file.is_open()) {
      file<<category<<" "<<amount<<" "<<date<<endl;
        file<<"------------"<<endl;

      file.close();
        cout<<"\n Expense Added Successfully!\n";
    }
    else {
        cout<<"Expenses can not be added!\n ";
    }
}

void ExpenseTracker::viewExpense() {
    ifstream file("expenses.txt");
    if (file.is_open()) {
        string line;
        cout<<"======Expenses Lists:======\n ";
        while (getline(file,line)) {
            cout<<line<<endl;
        }
        file.close();
    }
    else {
        cout<<"File could not be opened!\n ";
    }
}

void ExpenseTracker::searchExpense() {
    string searchCategory;
    string line;

    cout << "Enter Category to Search: ";
    cin.ignore();
    getline(cin, searchCategory);

    ifstream file("expense.txt");

    if (file.is_open()) {

        bool found = false;

        while (getline(file, line)) {

            if (line == searchCategory) {

                found = true;

                cout << "\n===== Expense Found =====\n";
                cout << "Category: " << line << endl;

                if (getline(file, line)) {
                    cout << "Amount: " << line << endl;
                }

                if (getline(file, line)) {
                    cout << "Date: " << line << endl;
                }

                if (getline(file, line)) {
                    cout << line << endl;
                }
            }
        }

        if (!found) {
            cout << "\nExpense not found!\n";
        }

        file.close();
    }
    else {
        cout << "\nFile could not be opened!\n";
    }
}
