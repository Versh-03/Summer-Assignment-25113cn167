//WAP to print character Pyramid

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter no of rows: ";
    if(!(cin>>num)){
        cout<<"Invalid Input!"<<endl;
        return 0;
    }
    for(int i=1;i<=num;i++){
        for (int j = 1; j <=num - i; j++) {
            cout << " ";
        }
        for(int j=0;j<i;j++){
            cout<<(char)('A'+j);
        }
        for(int j=i-2;j>=0;j--){
            cout<<(char)('A'+j);
        }
        cout<<endl;
    }
    return 0;
}