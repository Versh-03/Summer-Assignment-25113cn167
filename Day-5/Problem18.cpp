//WAP to check for Strong number

#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int strong(int n){
    int rem,sum=0;
    while(n!=0){
        rem=n%10;
        sum+=factorial(rem);
        n=n/10;
    }
    return sum;
}

int main(){
    int num;
    cout<<"Enter your Number: ";
    cin>>num;
    if(num==strong(num)){
        cout<<num<<" is a Strong Number";
    }
    else{
        cout<<num<<" is not a Strong Number";
    }
    cout<<endl;
    return 0;
}