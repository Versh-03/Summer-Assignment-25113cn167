//WAP to print reverse star pattern

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter no of rows: ";
    if(!(cin>>num)){
        cout<<"Invalid Input!"<<endl;
        return 0;
    }
    for(int i=num;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}