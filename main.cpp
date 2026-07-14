#include"include/Scholarship.h"
int main() {
    Scholarship s;
    //s.addScholarship();
   // s.viewScholarship();
   // s.searchScholarship();
    int choice;
    do {
        cout<<"\n=====Scholarship Menu=====\n";
        cout<<"1.Add Scholarship\n";
        cout<<"2.view Scholarship\n";
        cout<<"3.Search Scholarship\n";
        cout<<"4.Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice) {
            case 1:
                s.addScholarship();
                break;
            case 2:
                s.viewScholarship();
                break;
            case 3:
                s.searchScholarship();
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;
                default:
                cout<<"Invalid choice"<<endl;
        }
    }
    while(choice != 4);
    return 0;
}