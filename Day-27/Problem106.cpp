//WAP to create an employee management system

#include <iostream>
using namespace std;

int main() {
    int empId = 0;
    string empName = "";
    string designation = "";
    string department = "";
    int choice;

    do {
        cout << endl;
        cout << "===== EMPLOYEE MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employee Details" << endl;
        cout << "3. Update Designation" << endl;
        cout << "4. Update Department" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> empId;

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, empName);

                cout << "Enter Designation: ";
                getline(cin, designation);

                cout << "Enter Department: ";
                getline(cin, department);

                cout << "Employee Added Successfully!" << endl;
                break;

            case 2:
                if(empId == 0) {
                    cout << "No Employee Record Found!" << endl;
                } else {
                    cout << "Employee ID: " << empId << endl;
                    cout << "Employee Name: " << empName << endl;
                    cout << "Designation: " << designation << endl;
                    cout << "Department: " << department << endl;
                }
                break;

            case 3:
                cout << "Enter New Designation: ";
                cin.ignore();
                getline(cin, designation);
                cout << "Designation Updated!" << endl;
                break;

            case 4:
                cout << "Enter New Department: ";
                cin.ignore();
                getline(cin, department);
                cout << "Department Updated!" << endl;
                break;

            case 5:
                cout << "Thank you" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}