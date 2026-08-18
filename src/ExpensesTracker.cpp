//
// Created by AL EMRAN on 8/8/2026.
//
#include"../include/ExpensesTracker.h"
void ExpenseTracker::addExpense() {
    cout << "Enter Expense Category: ";
    cin.ignore();
    getline(cin, category);

    cout << "Enter Amount: ";
    cin >> amount;
    cin.ignore();

    cout << "Enter date: ";
    getline(cin, date);

    ofstream file("expenses.txt", ios::app);

    if (file.is_open()) {
        file << category << endl;
        file << amount << endl;
        file << date << endl;
        file << "------------" << endl;

        file.close();
        cout << "\nExpense Added Successfully!\n";
    }
    else {
        cout << "Expenses cannot be added!\n";
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

    cout << "Enter Category to Search: ";
    cin.ignore();
    getline(cin, searchCategory);

    ifstream file("expenses.txt");

    if (!file.is_open()) {
        cout << "\nFile could not be opened!\n";
        return;
    }

    string categoryLine;
    string amountLine;
    string dateLine;
    string separator;

    bool found = false;

    while (getline(file, categoryLine)) {

        // Skip separator or empty lines
        if (categoryLine.empty() || categoryLine == "------------") {
            continue;
        }

        // Read amount, date and separator
        if (!getline(file, amountLine))
            break;

        if (!getline(file, dateLine))
            break;

        getline(file, separator);

        if (categoryLine == searchCategory) {

            cout << "\n===== Expense Found =====\n";
            cout << "Category: " << categoryLine << endl;
            cout << "Amount: " << amountLine << endl;
            cout << "Date: " << dateLine << endl;

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nExpense not found!\n";
    }

    file.close();
}