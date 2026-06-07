//WAP to write a function to find factorial

#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    if(num<0){
        cout<<"Factorial does not exist!"<<endl;
        return 0;
    }
    cout<<"Factorial: "<<factorial(num)<<endl;

    return 0;
}