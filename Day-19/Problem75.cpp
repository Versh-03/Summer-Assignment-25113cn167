//WAP to transpose a matrix

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
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    cout << "Enter Matrix:\n";
    vector<vector<int>> mat= inputMatrix(rows, cols);
    vector<vector<int>> transpose(cols, vector<int>(rows));

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transpose[j][i]=mat[i][j];
        }
    }

    cout << "\nTranspose Matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}