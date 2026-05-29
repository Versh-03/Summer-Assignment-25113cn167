//WAP to check if a number is Prime or Not

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
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    if(prime(num)){
        cout<<"It is Prime"<<endl;
    }
    else{
        cout<<"It is not Prime"<<endl;
    }

    return 0;
}