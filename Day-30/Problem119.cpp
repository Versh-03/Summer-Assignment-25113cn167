//WAP to create a mini employee management system

#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_EMPLOYEES = 100;
const int NAME_LEN = 50;
const int DEPT_LEN = 50;

struct Employee {
    int empId;
    char name[NAME_LEN];
    char department[DEPT_LEN];
    float salary;
};

Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;

int findEmployeeIndex(int empId) {
    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].empId == empId) return i;
    }
    return -1;
}

void addEmployee() {
    if (employeeCount >= MAX_EMPLOYEES) {
        cout << "Employee storage full!" << endl;
        return;
    }

    Employee e;
    cout << "Enter Employee ID: ";
    cin >> e.empId;

    if (findEmployeeIndex(e.empId) != -1) {
        cout << "Employee with this ID already exists!" << endl;
        return;
    }

    cout << "Enter Name: ";
    cin.ignore();
    cin.getline(e.name, NAME_LEN);

    cout << "Enter Department: ";
    cin.getline(e.department, DEPT_LEN);

    cout << "Enter Salary: ";
    cin >> e.salary;

    employees[employeeCount++] = e;
    cout << "Employee added successfully!" << endl;
}

void displayEmployee(const Employee &e) {
    cout << "-----------------------------------" << endl;
    cout << "Employee ID : " << e.empId << endl;
    cout << "Name        : " << e.name << endl;
    cout << "Department  : " << e.department << endl;
    cout << "Salary      : " << fixed << setprecision(2) << e.salary << endl;
}

void displayAll() {
    if (employeeCount == 0) {
        cout << "No employee records found." << endl;
        return;
    }
    for (int i = 0; i < employeeCount; i++) displayEmployee(employees[i]);
    cout << "-----------------------------------" << endl;
}

void searchEmployee() {
    int empId;
    cout << "Enter Employee ID to search: ";
    cin >> empId;

    int idx = findEmployeeIndex(empId);
    if (idx == -1) {
        cout << "Employee not found." << endl;
        return;
    }
    displayEmployee(employees[idx]);
}

void updateEmployee() {
    int empId;
    cout << "Enter Employee ID to update: ";
    cin >> empId;

    int idx = findEmployeeIndex(empId);
    if (idx == -1) {
        cout << "Employee not found." << endl;
        return;
    }

    Employee &e = employees[idx];
    cout << "Enter new Name: ";
    cin.ignore();
    cin.getline(e.name, NAME_LEN);

    cout << "Enter new Department: ";
    cin.getline(e.department, DEPT_LEN);

    cout << "Enter new Salary: ";
    cin >> e.salary;

    cout << "Employee updated successfully!" << endl;
}

void deleteEmployee() {
    int empId;
    cout << "Enter Employee ID to delete: ";
    cin >> empId;

    int idx = findEmployeeIndex(empId);
    if (idx == -1) {
        cout << "Employee not found." << endl;
        return;
    }

    for (int i = idx; i < employeeCount - 1; i++) {
        employees[i] = employees[i + 1];
    }
    employeeCount--;
    cout << "Employee deleted successfully!" << endl;
}

void giveRaise() {
    int empId;
    float amount;
    cout << "Enter Employee ID to give raise: ";
    cin >> empId;

    int idx = findEmployeeIndex(empId);
    if (idx == -1) {
        cout << "Employee not found." << endl;
        return;
    }

    cout << "Enter raise amount: ";
    cin >> amount;

    employees[idx].salary += amount;
    cout << "Raise applied successfully! New Salary: " << fixed << setprecision(2) << employees[idx].salary << endl;
}

void showMenu() {
    cout << endl << "========= MINI EMPLOYEE MANAGEMENT SYSTEM =========" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Display All Employees" << endl;
    cout << "3. Search Employee" << endl;
    cout << "4. Update Employee" << endl;
    cout << "5. Delete Employee" << endl;
    cout << "6. Give Raise" << endl;
    cout << "7. Exit" << endl;
    cout << "====================================================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: displayAll(); break;
            case 3: searchEmployee(); break;
            case 4: updateEmployee(); break;
            case 5: deleteEmployee(); break;
            case 6: giveRaise(); break;
            case 7: cout << "Thank You!" << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 7);

    return 0;
}