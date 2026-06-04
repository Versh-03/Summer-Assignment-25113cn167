// WAP to print character triangle

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter no. of rows: ";
    if(!(cin>>num)){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)('A'+j%26);
        }
        cout<<endl;
    }
    return 0;
}