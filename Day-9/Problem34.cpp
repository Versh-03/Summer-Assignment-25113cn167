//WAP to print reverse number triangle

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter no of rows: ";
    if(!(cin>>num)){
        cout<<"Invalid Input!"<<endl;
        return 0;
    }
    for(int i=num;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}    