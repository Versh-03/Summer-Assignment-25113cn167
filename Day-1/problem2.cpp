//WAP to print the multiplication table of a given number

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number to print table of: ";
    cin>>num;
    for(int i=1;i<=10;i++){
        cout<<num<<"*"<<i<<"="<<i*num<<endl;
    }
    return 0;
}