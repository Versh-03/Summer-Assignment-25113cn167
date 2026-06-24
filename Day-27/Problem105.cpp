//WAP to create student record management system

#include <iostream>
using namespace std;

int main() {
    int rollNo = 0, marks = 0;
    string name = "";
    int choice;

    do {
        cout << "\n===== STUDENT RECORD MANAGEMENT ====="<<endl;
        cout << "1. Add Student Record"<<endl;
        cout << "2. Display Student Record"<<endl;
        cout << "3. Update Marks"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> rollNo;

                cin.ignore();

                cout << "Enter Name: ";
                getline(cin, name);

                cout << "Enter Marks: ";
                cin >> marks;

                cout << "Record Added Successfully!\n";
                break;

            case 2:
                if(rollNo == 0) {
                    cout << "No Record Found!\n";
                } else {
                    cout << "\nStudent Details\n";
                    cout << "Roll No: " << rollNo << endl;
                    cout << "Name: " << name << endl;
                    cout << "Marks: " << marks << endl;
                }
                break;

            case 3:
                if(rollNo == 0) {
                    cout << "No Record Found!\n";
                } else {
                    cout << "Enter New Marks: ";
                    cin >> marks;
                    cout << "Marks Updated Successfully!\n";
                }
                break;

            case 4:
                cout << "Thank You\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}