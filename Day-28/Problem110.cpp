//WAP to create a bank account system

#include <iostream>
using namespace std;

struct Account {
    int accountNo;
    string holderName;
    double balance;
};

int main() {
    Account accounts[100];
    int count = 0;
    int choice;

    do {
        cout << endl;
        cout << "===== BANK ACCOUNT MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. View Account Details" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Withdraw Money" << endl;
        cout << "5. Delete Account" << endl;
        cout << "6. View All Accounts" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {
            cout << "Enter Account Number: ";
            cin >> accounts[count].accountNo;

            cin.ignore();

            cout << "Enter Account Holder Name: ";
            getline(cin, accounts[count].holderName);

            cout << "Enter Initial Balance: ";
            cin >> accounts[count].balance;

            count++;

            cout << "Account Created Successfully!" << endl;
            break;
        }

        case 2: {
            int accNo;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> accNo;

            for(int i = 0; i < count; i++) {
                if(accounts[i].accountNo == accNo) {
                    cout << "Account Number: "
                         << accounts[i].accountNo << endl;

                    cout << "Holder Name: "
                         << accounts[i].holderName << endl;

                    cout << "Balance: Rs. "
                         << accounts[i].balance << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Account Not Found!" << endl;

            break;
        }

        case 3: {
            int accNo;
            double amount;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> accNo;

            cout << "Enter Deposit Amount: ";
            cin >> amount;

            for(int i = 0; i < count; i++) {
                if(accounts[i].accountNo == accNo) {
                    accounts[i].balance += amount;
                    found = true;
                    cout << "Deposit Successful!" << endl;
                    break;
                }
            }

            if(!found)
                cout << "Account Not Found!" << endl;

            break;
        }

        case 4: {
            int accNo;
            double amount;
            bool found = false;

            cout << "Enter Account Number: ";
            cin >> accNo;

            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            for(int i = 0; i < count; i++) {
                if(accounts[i].accountNo == accNo) {

                    if(amount > accounts[i].balance)
                        cout << "Insufficient Balance!" << endl;
                    else {
                        accounts[i].balance -= amount;
                        cout << "Withdrawal Successful!" << endl;
                    }

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Account Not Found!" << endl;

            break;
        }

        case 5: {
            int accNo;
            bool found = false;

            cout << "Enter Account Number to Delete: ";
            cin >> accNo;

            for(int i = 0; i < count; i++) {
                if(accounts[i].accountNo == accNo) {

                    for(int j = i; j < count - 1; j++) {
                        accounts[j] = accounts[j + 1];
                    }

                    count--;
                    found = true;

                    cout << "Account Deleted Successfully!" << endl;
                    break;
                }
            }

            if(!found)
                cout << "Account Not Found!" << endl;

            break;
        }

        case 6: {
            if(count == 0) {
                cout << "No Accounts Available!" << endl;
                break;
            }

            cout << endl;
            cout << "===== ALL ACCOUNTS =====" << endl;

            for(int i = 0; i < count; i++) {
                cout << "Account Number: "
                     << accounts[i].accountNo << endl;

                cout << "Holder Name: "
                     << accounts[i].holderName << endl;

                cout << "Balance: Rs. "
                     << accounts[i].balance << endl;

                cout << endl;
            }

            break;
        }

        case 7:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while(choice != 7);

    return 0;
}