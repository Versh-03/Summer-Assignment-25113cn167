//WAP to reverse a number

#include <iostream>
using namespace std;

int main(){
    int num,rem,rev=0;
    cout<<"Enter number: ";
    cin>>num;
    while(num!=0){
        rem=num%10;
        num/=10;
        rev=(rev*10)+rem;
    }

    cout<<"Reversed number: "<<rev<<endl;
    return 0;
}