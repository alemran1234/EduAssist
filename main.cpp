#include"include/ProgressTracker.h"
using namespace std;
int main() {
    ProgressTracker pt;
    int choice;
    do {
        cout<<"\n===Progress Tracker ===\n"<<endl;
        cout<<"1. Update progress "<<endl;
        cout<<"2.show progress"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch (choice) {
            case 1:
                pt.updateprogress();
                break;
            case 2:
                pt.showprogress();
                break;
            case 0:
                break;
            default:
                cout<<"invalid choice"<<endl;
        }
    }
    while (choice != 0);
    return 0;
}