// WAP to print half pyramid pattern

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter no of rows: ";
    if(!(cin>>num)){ //Checking if input is only int
        cout<<"Invalid Input!"<<endl;
        return 0;
    }
    for(int i=1;i<=num;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}