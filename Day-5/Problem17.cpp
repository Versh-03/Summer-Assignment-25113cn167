//WAP to check for perfect number

#include <iostream>
using namespace std;

int PerfectNum(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    if(num==PerfectNum(num)){
        cout<<num<<" is a Perfect Number";
    }
    else{
        cout<<num<<" is not a Perfect Number";
    }
    cout<<endl;
    return 0;
}