//WAP to create ATM Simulation

#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 10000, amount;

    do {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit Successful!" << endl;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                }
                else if (amount > balance) {
                    cout << "Insufficient Balance!" << endl;
                }
                else {
                    balance -= amount;
                    cout << "Withdrawal Successful!" << endl;
                }
                break;

            case 4:
                cout << "Thank you" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}