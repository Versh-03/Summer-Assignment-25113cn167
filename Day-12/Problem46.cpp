//WAP to write a function for Armstrong number

#include <iostream>
#include <cmath>
using namespace std;
int countDigit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

bool Armstrong(int n,int c){
    int r,sum=0;
    int temp=n;
    while(n!=0){
        r=n%10;
        n=n/10;
        sum+=pow(r,c);
    }
    if(temp==sum){
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
    //The countDigit function returns the no. of digits which is then passed to Armstrong function
    if(Armstrong(num,countDigit(num))){ 
        cout<<"It is an Armstrong Number";
    }
    else{
        cout<<"It is not an Armstrong Number";
    }
    cout<<endl;
    return 0;
}