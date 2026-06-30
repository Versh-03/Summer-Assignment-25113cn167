//WAP to create a mini library system

#include <iostream>
using namespace std;

const int MAX_BOOKS = 100;
const int TITLE_LEN = 50;
const int AUTHOR_LEN = 50;

struct Book {
    int bookId;
    char title[TITLE_LEN];
    char author[AUTHOR_LEN];
    int quantity;
    int issued;
};

Book books[MAX_BOOKS];
int bookCount = 0;

int findBookIndex(int bookId) {
    for (int i = 0; i < bookCount; i++) {
        if (books[i].bookId == bookId) return i;
    }
    return -1;
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        cout << "Library storage full!" << endl;
        return;
    }

    Book b;
    cout << "Enter Book ID: ";
    cin >> b.bookId;

    if (findBookIndex(b.bookId) != -1) {
        cout << "Book with this ID already exists!" << endl;
        return;
    }

    cout << "Enter Title: ";
    cin.ignore();
    cin.getline(b.title, TITLE_LEN);

    cout << "Enter Author: ";
    cin.getline(b.author, AUTHOR_LEN);

    cout << "Enter Quantity: ";
    cin >> b.quantity;

    b.issued = 0;
    books[bookCount++] = b;
    cout << "Book added successfully!" << endl;
}

void displayBook(const Book &b) {
    cout << "-----------------------------------" << endl;
    cout << "Book ID    : " << b.bookId << endl;
    cout << "Title      : " << b.title << endl;
    cout << "Author     : " << b.author << endl;
    cout << "Quantity   : " << b.quantity << endl;
    cout << "Issued     : " << b.issued << endl;
    cout << "Available  : " << (b.quantity - b.issued) << endl;
}

void displayAll() {
    if (bookCount == 0) {
        cout << "No books found." << endl;
        return;
    }
    for (int i = 0; i < bookCount; i++) displayBook(books[i]);
    cout << "-----------------------------------" << endl;
}

void searchBook() {
    int bookId;
    cout << "Enter Book ID to search: ";
    cin >> bookId;

    int idx = findBookIndex(bookId);
    if (idx == -1) {
        cout << "Book not found." << endl;
        return;
    }
    displayBook(books[idx]);
}

void updateBook() {
    int bookId;
    cout << "Enter Book ID to update: ";
    cin >> bookId;

    int idx = findBookIndex(bookId);
    if (idx == -1) {
        cout << "Book not found." << endl;
        return;
    }

    Book &b = books[idx];
    cout << "Enter new Title: ";
    cin.ignore();
    cin.getline(b.title, TITLE_LEN);

    cout << "Enter new Author: ";
    cin.getline(b.author, AUTHOR_LEN);

    cout << "Enter new Quantity: ";
    cin >> b.quantity;

    cout << "Book updated successfully!" << endl;
}

void deleteBook() {
    int bookId;
    cout << "Enter Book ID to delete: ";
    cin >> bookId;

    int idx = findBookIndex(bookId);
    if (idx == -1) {
        cout << "Book not found." << endl;
        return;
    }

    for (int i = idx; i < bookCount - 1; i++) {
        books[i] = books[i + 1];
    }
    bookCount--;
    cout << "Book deleted successfully!" << endl;
}

void issueBook() {
    int bookId;
    cout << "Enter Book ID to issue: ";
    cin >> bookId;

    int idx = findBookIndex(bookId);
    if (idx == -1) {
        cout << "Book not found." << endl;
        return;
    }

    Book &b = books[idx];
    if (b.issued >= b.quantity) {
        cout << "No copies available to issue." << endl;
        return;
    }

    b.issued++;
    cout << "Book issued successfully!" << endl;
}

void returnBook() {
    int bookId;
    cout << "Enter Book ID to return: ";
    cin >> bookId;

    int idx = findBookIndex(bookId);
    if (idx == -1) {
        cout << "Book not found." << endl;
        return;
    }

    Book &b = books[idx];
    if (b.issued <= 0) {
        cout << "No issued copies to return." << endl;
        return;
    }

    b.issued--;
    cout << "Book returned successfully!" << endl;
}

void showMenu() {
    cout << endl << "========= MINI LIBRARY SYSTEM =========" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Display All Books" << endl;
    cout << "3. Search Book" << endl;
    cout << "4. Update Book" << endl;
    cout << "5. Delete Book" << endl;
    cout << "6. Issue Book" << endl;
    cout << "7. Return Book" << endl;
    cout << "8. Exit" << endl;
    cout << "========================================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayAll(); break;
            case 3: searchBook(); break;
            case 4: updateBook(); break;
            case 5: deleteBook(); break;
            case 6: issueBook(); break;
            case 7: returnBook(); break;
            case 8: cout << "Exiting... Goodbye!" << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 8);

    return 0;
}