//WAP to write a function to find maximum

#include <iostream>
using namespace std;

int maxi(int a,int b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}
int main(){
    int num1,num2;
    cout<<"Enter your two numbers: ";
    cin>>num1>>num2;
    if(num1==num2){
        cout<<"Both are equal"<<endl<<num1<<"="<<num2<<endl;
    }
    else{
        int result=maxi(num1,num2);
        cout<<"The maximum value is: "<<result<<endl;
    }
    return 0;
}