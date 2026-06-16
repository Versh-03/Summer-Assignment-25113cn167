//WAP to print diagonal sum

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
    int rows, cols, sum=0;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    if(rows!=cols){
        cout<<"Not a square matrix! Invalid Input"<<endl;
        return 0;
    }
    cout << "Enter Matrix:\n";
    vector<vector<int>> mat= inputMatrix(rows, cols);

    for(int i=0;i<rows;i++){
        sum+=mat[i][i];
    }
    
    cout<<"Sum of diagonal elements: "<<sum<<endl;
    return 0;
}