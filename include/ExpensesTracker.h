//
// Created by AL EMRAN on 8/8/2026.
//

#ifndef EDUASSIST_EXPENSESTRACKER_H
#define EDUASSIST_EXPENSESTRACKER_H
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class ExpenseTracker {
    private:
    string category;
    double amount;
    string date;
    public:
    void addExpense();
    void viewExpense();
    void searchExpense();
};

#endif //EDUASSIST_EXPENSESTRACKER_H
