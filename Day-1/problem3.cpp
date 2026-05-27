//WAP to find factorial of a number

#include <iostream>
using namespace std;

int main(){
    int num,fact=1;
    cout<<"Enter number to find factorial of: ";
    cin>>num;

    for(int i=1;i<=num;i++){
        fact*=i;
    }

    cout<<"Factorial of given number is: "<<fact<<endl;
    
    return 0;
}