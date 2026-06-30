//WAP to create a student record system using strings and arrays

#include <iostream>
#include <iomanip>
using namespace std;
const int MAX_STUDENTS = 100;
const int NAME_LEN = 50;
struct Student {
    int rollNo;
    char name[NAME_LEN];
    char branch[NAME_LEN];
    float marks[5];
    float average;
};
Student students[MAX_STUDENTS];
int studentCount = 0;
float calculateAverage(float marks[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) sum += marks[i];
    return sum / n;
}
int findStudentIndex(int rollNo) {
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == rollNo) return i;
    }
    return -1;
}
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Record storage full!\n";
        return;
    }
    Student s;
    cout << "Enter Roll No: ";
    cin >> s.rollNo;
    if (findStudentIndex(s.rollNo) != -1) {
        cout << "Student with this roll number already exists!\n";
        return;
    }
    cout << "Enter Name: ";
    cin.ignore();
    cin.getline(s.name, NAME_LEN);
    cout << "Enter Branch: ";
    cin.getline(s.branch, NAME_LEN);
    cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }
    s.average = calculateAverage(s.marks, 5);
    students[studentCount++] = s;
    cout << "Student added successfully!\n";
}
void displayStudent(const Student &s) {
    cout << "-----------------------------------\n";
    cout << "Roll No : " << s.rollNo << "\n";
    cout << "Name    : " << s.name << "\n";
    cout << "Branch  : " << s.branch << "\n";
    cout << "Marks   : ";
    for (int i = 0; i < 5; i++) cout << s.marks[i] << " ";
    cout << "\nAverage : " << fixed << setprecision(2) << s.average << "\n";
}
void displayAll() {
    if (studentCount == 0) {
        cout << "No records found.\n";
        return;
    }
    for (int i = 0; i < studentCount; i++) displayStudent(students[i]);
    cout << "-----------------------------------\n";
}
void searchStudent() {
    int rollNo;
    cout << "Enter Roll No to search: ";
    cin >> rollNo;
    int idx = findStudentIndex(rollNo);
    if (idx == -1) {
        cout << "Student not found.\n";
        return;
    }
    displayStudent(students[idx]);
}
void updateStudent() {
    int rollNo;
    cout << "Enter Roll No to update: ";
    cin >> rollNo;
    int idx = findStudentIndex(rollNo);
    if (idx == -1) {
        cout << "Student not found.\n";
        return;
    }
    Student &s = students[idx];
    cout << "Enter new Name: ";
    cin.ignore();
    cin.getline(s.name, NAME_LEN);
    cout << "Enter new Branch: ";
    cin.getline(s.branch, NAME_LEN);
    cout << "Enter new marks for 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> s.marks[i];
    }
    s.average = calculateAverage(s.marks, 5);
    cout << "Record updated successfully!\n";
}
void deleteStudent() {
    int rollNo;
    cout << "Enter Roll No to delete: ";
    cin >> rollNo;
    int idx = findStudentIndex(rollNo);
    if (idx == -1) {
        cout << "Student not found.\n";
        return;
    }
    for (int i = idx; i < studentCount - 1; i++) {
        students[i] = students[i + 1];
    }
    studentCount--;
    cout << "Record deleted successfully!\n";
}
void showMenu() {
    cout << "\n========= STUDENT RECORD SYSTEM =========\n";
    cout << "1. Add Student\n";
    cout << "2. Display All Students\n";
    cout << "3. Search Student\n";
    cout << "4. Update Student\n";
    cout << "5. Delete Student\n";
    cout << "6. Exit\n";
    cout << "==========================================\n";
    cout << "Enter your choice: ";
}
int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: cout << "Thank You \n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);
    return 0;
}