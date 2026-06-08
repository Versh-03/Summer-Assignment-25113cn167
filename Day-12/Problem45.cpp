//WAP to write a function for palindrome

#include <iostream>
using namespace std;

int rev(int n){
    int rem,newNum=0;
    int temp=n;
    while(n!=0){
        rem=n%10;
        n=n/10;
        newNum=newNum*10+rem;
    }
    return newNum;
}
bool palindrome(int n, int reversed){
    if(n==rev(n)){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    if(palindrome(num,rev(num))){
        cout<<num<<" is Palindrome"<<endl;

    }
    else{
        cout<<num<<" is not Palindrome"<<endl;
    }

    return 0;
}