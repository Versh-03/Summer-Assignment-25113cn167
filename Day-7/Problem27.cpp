//WAP to find recursive sum of digit

#include <iostream>
using namespace std;

int digit(int n){
    if(n==0) return 0;
    else{
        return ((n%10) + digit(n/10));
    }
}

int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    int result=digit(num);
    cout<<"Sum of digits: "<<result<<endl;

    return 0;
}