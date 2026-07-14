//
// Created by AL EMRAN on 7/14/2026.
//
#include"../include/Scholarship.h"
#include<fstream>

void Scholarship::addScholarship() {
    cout<<"Enter scholarship Name:";
    cin.ignore();
    getline(cin,scholarshipName);
    cout<<"Enter country:";
    getline(cin,country);
    cout<<"Enter minimum CGPA:";
    cin>>minCGPA;
    cin.ignore();
    cout<<"Enter deadline";
    getline(cin,deadline);
    ofstream file("scholarship.txt",ios::app);
    if(file.is_open()) {
        file<<scholarshipName<<endl;
        file<<country<<endl;
        file<<minCGPA<<endl;
        file<<deadline<<endl;
        file<<"---------------"<<endl;
        file.close();
        cout<<"\nScholarship added succesfully!\n";
    }
    else {
        cout<<"\nFile could not be oppened!\n";
    }

}

void Scholarship::viewScholarship() {
    ifstream file("scholarship.txt");
    if(file.is_open()) {
        string line;
        cout<<"====scholarship Lists====\n";
        while(getline(file,line)) {
            cout<<line<<endl;

        }
        file.close();
    }
    else {
        cout<<"\nFile could not be oppened!\n";
    }

}

void Scholarship::searchScholarship() {
    ifstream file("scholarship.txt");
    if(!file.is_open()) {
        cout<<"\nFile could not be oppened!\n";
        return;
    }
    string searchName;
    cout<<"Enter scholarship name:";

    getline(cin,searchName);
    string name,country,deadline;
    double cgpa;
    bool found = false;
    while (getline(file,name)) {
        getline(file,country);
        file>>cgpa;
        file.ignore();
        getline(file,deadline);
        string line;
        getline(file,line);

        if (name==searchName) {
            cout<<"\nScholarship found!\n";
            cout<<"Scholarship name:"<<name<<endl;
            cout<<"Scholarship country:"<<country<<endl;
            cout<<"Minimum CGPA:"<<cgpa<<endl;
            cout<<"Deadline:"<<deadline<<endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout<<"\nScholarship not found!\n";

    }
    file.close();

}
