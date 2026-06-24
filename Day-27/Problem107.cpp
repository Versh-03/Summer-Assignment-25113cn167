//WAP to create salary management system

#include <iostream>
using namespace std;

int main() {
    double basicSalary = 0;
    double bonus = 0;
    double deduction = 0;
    int choice;

    do {
        cout << endl;
        cout << "===== SALARY MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Set Basic Salary" << endl;
        cout << "2. Add Bonus" << endl;
        cout << "3. Add Deduction" << endl;
        cout << "4. View Salary Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Basic Salary: ";
                cin >> basicSalary;
                break;

            case 2:
                cout << "Enter Bonus Amount: ";
                cin >> bonus;
                break;

            case 3:
                cout << "Enter Deduction Amount: ";
                cin >> deduction;
                break;

            case 4:
                cout << "Basic Salary: Rs. " << basicSalary << endl;
                cout << "Bonus: Rs. " << bonus << endl;
                cout << "Deduction: Rs. " << deduction << endl;
                cout << "Net Salary: Rs. "
                     << basicSalary + bonus - deduction << endl;
                break;

            case 5:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}