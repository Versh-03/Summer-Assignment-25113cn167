//WAP to print repeated numbers

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
        for(int j=0;j<i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}