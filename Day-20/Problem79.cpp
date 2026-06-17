//WAP to find row-wise sum

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

    cout << "Row-Wise sum: "<<endl;
    for(int i = 0; i < rows; i++) {
        int sum=0;
        for(int j = 0; j < cols; j++) {
            sum+=mat[i][j];
        }
        cout <<sum<< endl;
    }

    return 0;
}