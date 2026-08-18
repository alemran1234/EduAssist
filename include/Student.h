//
// Created by niloy on 8/13/2026.
//

#ifndef EDUASSIST_STUDENT_H
#define EDUASSIST_STUDENT_H
#include <string>
class Student
{
private:
    std::string name;
    std::string id;

    std::string username;
    std::string password;
    std::string department;
    int  semester;
    double cgpa;

public:
    Student();

    void registerStudent();
    bool login();
    void viewProfile();
    void editProfile();

};

#endif //EDUASSIST_STUDENT_H
