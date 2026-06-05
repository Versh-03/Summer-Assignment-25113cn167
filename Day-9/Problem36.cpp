//WAP to print hollow square pattern

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
        for(int j=1;j<=num;j++){
            if(j==1||j==num||i==1||i==num){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}