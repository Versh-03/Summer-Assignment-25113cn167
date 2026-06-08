//WAP to write a function for fibonacci series

#include <iostream>
using namespace std;

void fibonacci(int n){
    int a=0;
    int b=1;
    int c=0;
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
}

int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    fibonacci(num);

    return 0;
}