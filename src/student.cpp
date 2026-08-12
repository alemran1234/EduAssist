//
// Created by AL EMRAN on 8/12/2026.
//
#include"../include/student.h"

void Student::registerstudent() {
    cout<<"==== Register Student ===\n"<<endl;
    cout<<"Enter Student Name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter Student ID: ";
    getline(cin,id);
    cout<<"Enter username: ";
    getline(cin,username);
    cout<<"Enter password: ";
    getline(cin,password);
    cout<<"Enter Department: ";
    getline(cin,department);
    cout<<"Enter Semester:";
    cin>>semester;
    cout<<"Enter CGPA:";
    cin>>cgpa;

    ofstream file("student.txt",ios::app);
    if (file.is_open()) {
        file<<name<<endl;
        file<<id<<endl;
        file<<username<<endl;
        file<<password<<endl;
        file<<department<<endl;
        file<<semester<<endl;
        file<<cgpa<<endl;
        file<<endl;
        file.close();
        cout<<"\n Student successfully registered!"<<endl;
    }
    else {
        cout<<"\n Student not successfully registered!"<<endl;
    }
}

bool Student::login() {
  string inputusername;
    string inputpassword;
    cout<<"\n====Student Login===="<<endl;
    cout<<"Enter Username: ";
    cin>>inputusername;
    cout<<"Enter Password: ";
    cin>>inputpassword;
    ifstream file("student.txt",ios::app);
    if (file.is_open()) {
        string savedName;
        string savedPassword;
        string savedDepartment;
        string savedSemester;
        string savedCgpa;
        string savedId;
        string savedUsername;
        getline(file,savedName);
        getline(file,savedPassword);
        getline(file,savedDepartment);
        getline(file,savedSemester);
        getline(file,savedCgpa);
        getline(file,savedId);
        getline(file,savedUsername);
        file.close();
        if (inputusername == savedUsername && inputpassword == savedPassword) {
            cout<<"\nUser logged in!"<<endl;
            return true;
        }
        else {
            cout<<"\n Invalid username or password!"<<endl;
        }
    }
    else {
        cout<<"\n No Student Registerd yet!"<<endl;
    }
    return false;

}

void Student::viewprofile() {
    ifstream file("student.txt",ios::app);
    if (file.is_open()) {
        cout<<"\n====Student Profile===="<<endl;
        string line;
        cout<<"Name: ";
        getline(file,name);
        cout<<line<<endl;
        cout<<"ID: ";
        getline(file,id);
        cout<<line<<endl;
        cout<<"Username: ";
        getline(file,username);
        cout<<line<<endl;
        cout<<"Password: ";
        getline(file,password);
        cout<<line<<endl;
        cout<<"Department: ";
        getline(file,department);
        cout<<line<<endl;
        cout<<"Semester: ";
        getline(file,semester);
        cout<<line<<endl;
        cout<<"CGPA: ";
        getline(file,cgpa);
        cout<<line<<endl;
        file.close();
    }
    else {
        cout<<"\n Student profile not found!"<<endl;
    }
}

void Student::editprofile() {

}
