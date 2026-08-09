#include "../include/ProgressTracker.h"

void ProgressTracker::updateprogress() {
    cout<<"Enter Study Hours: ";
    cin>>studyhours;
    cout<<"Enter completed task: ";
    cin>>completedtask;
    ofstream file("progress.txt",ios::app);
    if (file.is_open()) {
        file<<studyhours<<endl<<completedtask<<endl;
        file<<"---------------"<<endl;
        file.close();
        cout<<"Progress updated successfully!"<<endl;

    }
    else {
        cout<<"Error opening file!"<<endl;
    }
}

void ProgressTracker::showprogress() {
    ifstream file("progress.txt");
    if (file.is_open()) {
        string line;
        cout<<"\n======progress======"<<endl;
        while (getline(file,line)) {
            cout<<line<<endl;

        }
        file.close();

        }
        else {
            cout<<"Error opening file!"<<endl;
    }
}
