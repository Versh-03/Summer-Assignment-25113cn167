//WAP to create marksheet generation system

#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNo;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "===== MARKSHEET GENERATION SYSTEM =====" << endl;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter marks for Subject 1: ";
    cin >> m1;

    cout << "Enter marks for Subject 2: ";
    cin >> m2;

    cout << "Enter marks for Subject 3: ";
    cin >> m3;

    cout << "Enter marks for Subject 4: ";
    cin >> m4;

    cout << "Enter marks for Subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << endl;
    cout << "===== STUDENT MARKSHEET =====" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}