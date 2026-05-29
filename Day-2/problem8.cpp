//WAP to check if a number is Palindrome

#include <iostream>
using namespace std;

int palindrome(int n){
    int rem,rev=0;
    while(n!=0){
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    return rev;
}
int main(){
    int num,rev;
    cout<<"Enter number: ";
    cin>>num;
    if(num==palindrome(num)){
        cout<<num<<" is Palindrome"<<endl;
    }
    else{
        cout<<num<<" is Not Palindrome"<<endl;
    }

}