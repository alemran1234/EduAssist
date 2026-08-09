//
// Created by AL EMRAN on 8/9/2026.
//
#include"../include/ResourceManager.h"
void ResourceManager::addResource() {
    cout<<"Enter Subject Name: ";
    cin.ignore();
    getline(cin,subject);
    cout<<"Enter Resource Name:";
    getline(cin,name);
    cout<<"Enter Resource Link ";
    getline(cin,link);
    ofstream file("resource.txt",ios::app);
    if(file.is_open()) {
        file<<subject<<endl;
        file<<name<<endl;
        file<<link<<endl;
        file<<"-------------"<<endl;
    }
    else {
        cout<<"Error opening file"<<endl;
    }
}
void ResourceManager::viewResource() {
    ifstream file("resource.txt");
    if(file.is_open()) {
        string line;
        cout<<"====Academic Resource====\n"<<endl;
        while(getline(file,line)) {
            cout<<line<<endl;
        }
        file.close();
    }
    else {
        cout<<"Error opening file"<<endl;
    }
}
