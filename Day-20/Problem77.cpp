//WAP to multiply the matrices

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> inputMatrix(int rows, int cols) {
    vector<vector<int>> mat(rows, vector<int>(cols));
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }
    return mat;
}

int main() {
    int rows1, cols1,rows2,cols2;

    cout << "Enter number of rows and columns for matrix 1: ";
    cin >> rows1 >> cols1;
    cout << "Enter number of rows and columns for Matrix 2: ";
    cin >> rows2 >> cols2;

    if(cols1 != rows2) {
        cout <<"Multiplication not possible!";
        return 0;
    }

    cout << "Enter Matrix 1:\n";
    vector<vector<int>> mat1 = inputMatrix(rows1, cols1);

    cout << "Enter Matrix 2:\n";
    vector<vector<int>> mat2 = inputMatrix(rows2, cols2);

    vector<vector<int>> multi(rows1, vector<int>(cols2));
    
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            for(int k = 0; k < cols1; k++) {
                multi[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "\nProduct of the Matrices:\n";
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            cout << multi[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}