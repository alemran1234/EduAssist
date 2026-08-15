//
// Created by AL EMRAN on 8/9/2026.
//

#ifndef EDUASSIST_RESOURCEMANAGER_H
#define EDUASSIST_RESOURCEMANAGER_H
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class ResourceManager {
    private:
    string subject;
    string name;
    string link;
    public:
    void addResource();
    void viewResource();
};
#endif //EDUASSIST_RESOURCEMANAGER_H
