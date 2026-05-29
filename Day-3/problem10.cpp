//WAP to print prime numbers in a range.

#include <iostream>
using namespace std;

bool prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int upper,lower;
    cout<<"Enter Lower and Upper range: ";
    cin>>lower>>upper;
    for(int i=lower;i<=upper;i++){
        if(prime(i)){
            cout<<i<<", ";
        }
    }
    cout<<endl;

    return 0;
}