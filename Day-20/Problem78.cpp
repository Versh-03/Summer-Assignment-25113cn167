//WAP to check symmetric matrix

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
    if(rows!=cols){
        cout<<"Symmetric matrix not possible"<<endl;
        return 0;
    }
    cout << "Enter Matrix:\n";
    vector<vector<int>> mat= inputMatrix(rows, cols);
    
    for(int i = 0; i < rows; i++) {
        for(int j = i+1; j < cols; j++) { //Only check for upper triangle
            if(mat[i][j]!=mat[j][i]){
                cout<<"Not symmetric"<<endl;
                return 0;
            }
        }
    }
    cout<<"It is Symmetric"<<endl;

    return 0;
}