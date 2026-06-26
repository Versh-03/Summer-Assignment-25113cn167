//WAP to create menu driven calculator

#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    do {
        cout << endl;
        cout << "===== MENU DRIVEN CALCULATOR =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >= 1 && choice <= 5) {
            cout << "Enter First Number: ";
            cin >> num1;

            cout << "Enter Second Number: ";
            cin >> num2;
        }

        switch(choice) {

            case 1:
                cout << "Result = " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Result = " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Result = " << num1 * num2 << endl;
                break;

            case 4:
                if(num2 == 0)
                    cout << "Division by zero is not allowed!" << endl;
                else
                    cout << "Result = " << num1 / num2 << endl;
                break;

            case 5:
                if((int)num2 == 0)
                    cout << "Modulus by zero is not allowed!" << endl;
                else
                    cout << "Result = " << (int)num1 % (int)num2 << endl; // % works only for int
                break;

            case 6:
                cout << "Thank You" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}