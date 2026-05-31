//WAP to print nth Fibonacci term

#include <iostream>
using namespace std;

int main(){
    int a=0;
    int b=1;
    int n,c=0;
    cout<<"Enter your number: ";
    cin>>n;
    if(n==1){
        cout<<"The required term is: "<<a<<endl;
    }
    else if(n==2){
        cout<<"The required term is: "<<b<<endl;
    }
    else{
        for(int i=0;i<n-2;i++){
            c = a + b;
            a = b;
            b = c;
        }
        cout<<"The required term is: "<<c<<endl;
    }
    return 0;
}