//
// Created by AL EMRAN on 8/6/2026.
#include"../include/studyPlanner.h"

void StudyPlanner::addTask() {
    cout<<"Enter Task Name: ";
    cin.ignore();
    getline(cin,taskName);

    cout<<"Enter Task Date: ";
    getline(cin,date);
    status="pending";
    ofstream file("StudyPlanner.txt",ios::app);
    if(file.is_open()) {
        file<<taskName<<endl;
        file<<date<<endl;
        file<<status<<endl;
        file<<"--------------"<<endl;

        file.close();
        cout<<"\nTask added successfully!"<<endl;

    }
    else {
        cout<<"\nTask could not be added!"<<endl;
    }
}
void StudyPlanner::viewTasks() {
    ifstream file("StudyPlanner.txt",ios::app);
    if(file.is_open()) {
        string line;
        cout<<"\n===Study Planner Tasks==="<<endl;
        while (getline(file,line)) {
            cout<<line<<endl;
        }
        file.close();
    }
    else {
        cout<<"\nTask could not be viewed!"<<endl;
    }

}

void StudyPlanner::completeTasks() {

    string task;
    cin.ignore();

    cout << "\nEnter Task Name: ";
    getline(cin, task);

    ifstream file("StudyPlanner.txt");

    if (!file.is_open()) {
        cout << "\nNo task file found!\n";
        return;
    }

    ofstream temp("temp.txt");

    string name;
    string taskDate;
    string taskStatus;
    string separator;

    bool found = false;

    while (getline(file, name)) {

        if (!getline(file, taskDate))
            break;

        if (!getline(file, taskStatus))
            break;

        getline(file, separator);

        if (name == task) {
            taskStatus = "completed";
            found = true;
        }

        temp << name << endl;
        temp << taskDate << endl;
        temp << taskStatus << endl;
        temp << "--------------" << endl;
    }

    file.close();
    temp.close();

    remove("StudyPlanner.txt");
    rename("temp.txt", "StudyPlanner.txt");

    if (found) {
        cout << "\nTask \"" << task << "\" marked as completed!\n";
    }
    else {
        cout << "\nTask not found!\n";
    }
}