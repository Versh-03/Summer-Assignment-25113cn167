//WAP to recursive reverse a number

#include <iostream>
using namespace std;

int reverse(int n, int rev=0){
    if(n==0) return rev;
    else{
        return reverse(n/10,rev*10+(n%10));
    }
}

int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    cout<<"Reverse: "<<reverse(num)<<endl;

    return 0;
}