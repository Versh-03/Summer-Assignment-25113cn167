//WAP to print repeated character pattern

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter no of rows: ";
    if(!(cin>>num)){ //Checks for only int input
        cout<<"Invalid Input!"<<endl;
        return 0;
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)('A'+i%26);
        }
        cout<<endl;
    }
    return 0;
}