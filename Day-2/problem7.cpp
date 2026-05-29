//WAP to find product of digits of a number

#include <iostream>
using namespace std ;

int main(){
    int num,rem,product=1;
    cout<<"Enter number: ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        product*=rem;
        num/=10;
    }

    cout<<"Product of digits: "<<product<<endl;
    return 0;
}