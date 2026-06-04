//WAP to print a number triangle

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter no. of rows: ";
    if(!(cin>>num)){
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}