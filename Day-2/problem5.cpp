//WAP to find sum of digits of a given number.

#include <iostream>
using namespace std;

int main(){
    int num,rem,sum=0;
    cout<<"Enter number: ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        num/=10;
        sum+=rem;
    }

    cout<<"Sum of the digits: "<<sum<<endl;
    return 0;
}