//WAP to create library management system

#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
    bool borrowed;
};

int main() {
    Book books[100];
    int count = 0;
    int choice;

    do {
        cout << endl;
        cout << "===== LIBRARY MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Delete Book" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1: {
            cout << "Enter Book ID: ";
            cin >> books[count].id;

            cin.ignore();

            cout << "Enter Book Title: ";
            getline(cin, books[count].title);

            books[count].borrowed = false;
            count++;

            cout << "Book Added Successfully!" << endl;
            break;
        }

        case 2: {
            if(count == 0) {
                cout << "No Books Available!" << endl;
                break;
            }

            cout << endl;
            cout << "===== BOOK LIST =====" << endl;

            for(int i = 0; i < count; i++) {
                cout << "ID: " << books[i].id << endl;
                cout << "Title: " << books[i].title << endl;
                cout << "Status: ";

                if(books[i].borrowed)
                    cout << "Borrowed";
                else
                    cout << "Available";

                cout << endl << endl;
            }
            break;
        }

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Borrow: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(books[i].id == id) {
                    found = true;

                    if(books[i].borrowed)
                        cout << "Book Already Borrowed!" << endl;
                    else {
                        books[i].borrowed = true;
                        cout << "Book Borrowed Successfully!" << endl;
                    }
                    break;
                }
            }

            if(!found)
                cout << "Book Not Found!" << endl;

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Return: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(books[i].id == id) {
                    found = true;

                    if(!books[i].borrowed)
                        cout << "Book Was Not Borrowed!" << endl;
                    else {
                        books[i].borrowed = false;
                        cout << "Book Returned Successfully!" << endl;
                    }
                    break;
                }
            }

            if(!found)
                cout << "Book Not Found!" << endl;

            break;
        }

        case 5: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Delete: ";
            cin >> id;

            for(int i = 0; i < count; i++) {
                if(books[i].id == id) {
                    found = true;

                    for(int j = i; j < count - 1; j++) {
                        books[j] = books[j + 1];
                    }

                    count--;

                    cout << "Book Deleted Successfully!" << endl;
                    break;
                }
            }

            if(!found)
                cout << "Book Not Found!" << endl;

            break;
        }

        case 6:
            cout << "Thank You" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}