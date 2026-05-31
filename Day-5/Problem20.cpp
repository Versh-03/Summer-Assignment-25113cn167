//WAP to find the largest prime factor

#include <iostream>
using namespace std;

bool prime(int n){ //Checks if number is prime
    if(n<2) return false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int factors(int n){
    for(int i=n;i>=1;i--){ //Running from the number itself to find the largest
        if(n%i==0){
            if(prime(i)){ //First true instance is the largest value
                return i;
            }
        }
    }
    return -1;
}

int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    int result=factors(num);
    cout<<"The Largest Prime Factor is: "<<result<<endl;
    return 0;
}