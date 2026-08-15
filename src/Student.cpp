




#include "../include/student.h"
#include <iostream>
Student::Student()
{
    name = "";
    id = "";
    username= "";
    password = "";
    department ="";
    semester =1;
    cgpa =0.0;
}
void Student::registerStudent()
{
    std::cout <<"---Student Registration---"<<  std::endl;
    std::cout <<"Enter Name:";
    std::cin.ignore();
    std::getline(std::cin, name);

    std::cout<<"Enter ID:";
    std::cin>>id;
    std::cout<<"Enter Username:";
    std::cin>>username;
    std::cout<<"Enter Password:";
    std::cin>>password;
    std::cout<<"Enter Department:";
    std::cin>>department;
    std::cout<<"Enter Semester:";
    std::cin>>semester;
    std::cout<<"Enter CGPA:";
    std::cin>>cgpa;
    std::cout<<"Registration Successful!"<<std::endl;




}
bool Student::login()
{
std::string inputUser,inputPass;
    std::cout<<"\n---Student Login---"<<std::endl;
    std::cout<<"Enter Username:";
    std::cin>>inputUser;
    std::cout<<"Enter Password";
    std::cin>>inputPass;

    if (inputUser == username && inputPass == password)
    {
        std::cout<<"Login Successful!"<<std::endl;
        return true;
    }
    else
    {
        std::cout<<"Invalid Username or Password";
        return false;
    }
}
void Student::viewProfile()
{
    std::cout<<"\n---Student Profile---"<<std::endl;
    std::cout<<"Name:"<<name<<std::endl;
    std::cout<<"ID:"<<id<<std::endl;
    std::cout<<"Username:"<<username<<std::endl;
    std::cout<<"Department:"<<department<<std::endl;
    std::cout<<"Semester:"<<semester<<std::endl;
    std::cout<<"CGPA:"<<cgpa<<std::endl;


}

void Student::editProfile()
{
    std::cout<<"\n---Edit Profile---"<<std::endl;
    std::cout<<"Enter New Name:";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout<<"Enter New Department:";
    std::cin>>department;
    std::cout<<"Enter New Semester :";
    std::cin>>semester;
    std::cout<<"Profile Updated Successfully!"<<std::endl;

}

// Created by niloy on 8/13/2026.
//
