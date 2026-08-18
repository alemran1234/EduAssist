#include "../include/Student.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Student::Student()
{
    name = "";
    id = "";
    username = "";
    password = "";
    department = "";
    semester = 1;
    cgpa = 0.0;
}


// ================= REGISTER STUDENT =================
void Student::registerStudent()
{
    cout << "\n--- Student Registration ---\n";

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    cout << "Enter Department: ";
    cin >> department;

    cout << "Enter Semester: ";
    cin >> semester;

    cout << "Enter CGPA: ";
    cin >> cgpa;


    // Check whether username already exists
    ifstream checkFile("student.txt");

    string savedName;
    string savedID;
    string savedUsername;
    string savedPassword;
    string savedDepartment;
    int savedSemester;
    double savedCGPA;

    while (getline(checkFile, savedName))
    {
        getline(checkFile, savedID);
        getline(checkFile, savedUsername);
        getline(checkFile, savedPassword);
        getline(checkFile, savedDepartment);

        checkFile >> savedSemester;
        checkFile >> savedCGPA;
        checkFile.ignore();

        if (savedUsername == username)
        {
            cout << "\nUsername already exists!\n";
            checkFile.close();
            return;
        }
    }

    checkFile.close();


    // Append new student instead of overwriting old students
    ofstream file("student.txt", ios::app);

    if (file.is_open())
    {
        file << name << endl;
        file << id << endl;
        file << username << endl;
        file << password << endl;
        file << department << endl;
        file << semester << endl;
        file << cgpa << endl;
        file << "---------------" << endl;

        file.close();

        cout << "\nRegistration Successful!\n";
    }
    else
    {
        cout << "\nError opening student file!\n";
    }
}


// ================= LOGIN =================
bool Student::login()
{
    string inputUser;
    string inputPass;

    cout << "\n--- Student Login ---\n";

    cout << "Enter Username: ";
    cin >> inputUser;

    cout << "Enter Password: ";
    cin >> inputPass;


    ifstream file("student.txt");

    if (!file.is_open())
    {
        cout << "\nNo student registered yet!\n";
        return false;
    }


    string savedName;
    string savedID;
    string savedUsername;
    string savedPassword;
    string savedDepartment;

    int savedSemester;
    double savedCGPA;


    while (getline(file, savedName))
    {
        // Skip empty/separator lines
        if (savedName.empty() || savedName == "---------------")
            continue;

        getline(file, savedID);
        getline(file, savedUsername);
        getline(file, savedPassword);
        getline(file, savedDepartment);

        file >> savedSemester;
        file >> savedCGPA;
        file.ignore();

        // Remove separator line
        string separator;
        getline(file, separator);


        // Check this student's username and password
        if (inputUser == savedUsername &&
            inputPass == savedPassword)
        {
            // Load logged-in student's information
            name = savedName;
            id = savedID;
            username = savedUsername;
            password = savedPassword;
            department = savedDepartment;
            semester = savedSemester;
            cgpa = savedCGPA;

            file.close();

            cout << "\nLogin Successful!\n";

            return true;
        }
    }

    file.close();

    cout << "\nInvalid Username or Password!\n";

    return false;
}


// ================= VIEW PROFILE =================
void Student::viewProfile()
{
    cout << "\n--- Student Profile ---\n";

    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Username: " << username << endl;
    cout << "Department: " << department << endl;
    cout << "Semester: " << semester << endl;
    cout << "CGPA: " << cgpa << endl;
}


// ================= EDIT PROFILE =================
void Student::editProfile()
{
    cout << "\n--- Edit Profile ---\n";

    cout << "Enter New Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter New Department: ";
    cin >> department;

    cout << "Enter New Semester: ";
    cin >> semester;


    // Rewrite file with updated information
    ifstream file("student.txt");

    if (!file.is_open())
    {
        cout << "\nStudent file not found!\n";
        return;
    }

    ofstream temp("temp_student.txt");

    string savedName;
    string savedID;
    string savedUsername;
    string savedPassword;
    string savedDepartment;

    int savedSemester;
    double savedCGPA;


    while (getline(file, savedName))
    {
        if (savedName.empty() || savedName == "---------------")
            continue;

        getline(file, savedID);
        getline(file, savedUsername);
        getline(file, savedPassword);
        getline(file, savedDepartment);

        file >> savedSemester;
        file >> savedCGPA;
        file.ignore();

        string separator;
        getline(file, separator);


        // Update only the logged-in student
        if (savedUsername == username)
        {
            temp << name << endl;
            temp << savedID << endl;
            temp << savedUsername << endl;
            temp << savedPassword << endl;
            temp << department << endl;
            temp << semester << endl;
            temp << cgpa << endl;
        }
        else
        {
            temp << savedName << endl;
            temp << savedID << endl;
            temp << savedUsername << endl;
            temp << savedPassword << endl;
            temp << savedDepartment << endl;
            temp << savedSemester << endl;
            temp << savedCGPA << endl;
        }

        temp << "---------------" << endl;
    }


    file.close();
    temp.close();


    remove("student.txt");
    rename("temp_student.txt", "student.txt");

    cout << "\nProfile Updated Successfully!\n";
}