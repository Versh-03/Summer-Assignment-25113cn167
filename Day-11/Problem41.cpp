//WAP to write function to find sum of two numbers
#include <iostream>
using namespace std;

int sum(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
    int num1,num2;
    cout<<"Enter your both numbers: ";
    cin>>num1>>num2;
    cout<<"The sum is: "<<sum(num1,num2)<<endl;

    return 0;
}
