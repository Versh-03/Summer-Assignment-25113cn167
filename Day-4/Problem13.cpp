//WAP to generate a Fibonacci Series

#include <iostream>
using namespace std;

int main(){
    int a=0;
    int b=1;
    int n,c=0;
    cout<<"Enter your number: ";
    cin>>n;
    cout<<a<<" ,";
    if(n>1){
        cout<<b<<" ,";
    }
    for(int i=0;i<n-2;i++){
        c = a + b;
    cout << c << ", ";
    a = b;
    b = c;
    }
    cout<<endl;
    return 0;
}