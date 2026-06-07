//WAP to write a function to check for prime

#include <iostream>
using namespace std;

bool prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    if(num<2){
        cout<<num<<" is not a Prime Number."<<endl; //1,0 or -ve numbers can't be prime
        return 0;
    }
    if(prime(num)){
        cout<<num<<" is a Prime Number."<<endl;
    }
    else{
        cout<<num<<" is not a Prime Number."<<endl;
    }

    return 0;
}