//WAP to create string operations system

#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

string inputString() {
    string str;
    cin.ignore();
    cout << "Enter a String: ";
    getline(cin, str);
    return str;
}

int main() {
    string str;
    int choice;

    do {
        cout << endl;
        cout << "===== STRING OPERATIONS SYSTEM =====" << endl;
        cout << "1. Input String" << endl;
        cout << "2. Display String" << endl;
        cout << "3. Find Length" << endl;
        cout << "4. Reverse String" << endl;
        cout << "5. Count Vowels and Consonants" << endl;
        cout << "6. Convert to Uppercase" << endl;
        cout << "7. Convert to Lowercase" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                str = inputString();
                cout << "String Stored Successfully!" << endl;
                break;

            case 2:
                if(str.empty()) {
                    cout << "No String Available!" << endl;
                    break;
                }
                cout << "String: " << str << endl;
                break;

            case 3:
                if(str.empty()) {
                    cout << "No String Available!" << endl;
                    break;
                }
                cout << "Length = " << str.length() << endl;
                break;

            case 4:
                if(str.empty()) {
                    cout << "No String Available!" << endl;
                    break;
                }

                reverse(str.begin(), str.end());
                cout << "Reversed String: " << str << endl;
                break;

            case 5: {
                if(str.empty()) {
                    cout << "No String Available!" << endl;
                    break;
                }

                int vowels = count_if(str.begin(), str.end(), [](char ch) {
                    ch = tolower(ch);
                    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
                });

                int consonants = count_if(str.begin(), str.end(), [](char ch) {
                    ch = tolower(ch);
                    return isalpha(ch) &&
                           !(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
                });

                cout << "Vowels = " << vowels << endl;
                cout << "Consonants = " << consonants << endl;
                break;
            }

            case 6:
                if(str.empty()) {
                    cout << "No String Available!" << endl;
                    break;
                }

                transform(str.begin(), str.end(), str.begin(), ::toupper);
                cout << "Uppercase String: " << str << endl;
                break;

            case 7:
                if(str.empty()) {
                    cout << "No String Available!" << endl;
                    break;
                }

                transform(str.begin(), str.end(), str.begin(), ::tolower);
                cout << "Lowercase String: " << str << endl;
                break;

            case 8:
                cout << "Thank You" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 8);

    return 0;
}