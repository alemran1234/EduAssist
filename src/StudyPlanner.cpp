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
    cout<<"\nComplete Tasks!"<<endl;
    string task;
    cin.ignore();
    cout<<"Enter Task Name: ";
    getline(cin,task);
    cout<<"\nTask\""<<task<<"\" task mark as completed!"<<endl;
    cout<<"Update features will be added in the next version.\n";
}
