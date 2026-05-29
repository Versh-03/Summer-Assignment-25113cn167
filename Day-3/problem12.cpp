//WAP to find LCM of two numbers

#include <iostream>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    int num1, num2;
    cout<<"Enter both numbers: ";
    cin>>num1>>num2;
    int hcf=gcd(num1, num2);
    int lcm=(num1*num2)/hcf;
    cout<<"LCM of two numbers: "<<lcm<<endl;
    
    return 0;
}