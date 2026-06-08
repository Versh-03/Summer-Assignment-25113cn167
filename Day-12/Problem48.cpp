//WAP to write a function for perfect number

#include <iostream>
using namespace std;

bool PerfectNum(int n){
    int temp=n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
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
    if(PerfectNum(num)){
        cout<<num<<" is a Perfect Number"<<endl;
    }
    else{
        cout<<num<<" is not a Perfect Number"<<endl;
    }
}