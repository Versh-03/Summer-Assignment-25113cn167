//Find x^n without pow

#include <iostream>
using namespace std;

int main(){
    long long num;
    int power;
    cout<<"Enter your number: ";
    cin>>num;
    int temp=num;
    cout<<"Enter power: ";
    cin>>power;
    if(power<0){
        cout<<"Negative powers not supported"<<endl;
        return 0;
    }
    if(power==0){
        cout<<temp<<"^"<<power<<" is: "<<1<<endl;;
        return 0;
    }
    for(int i=1;i<power;i++){
        num*=temp;
    }

    cout<<temp<<"^"<<power<<" is: "<<num<<endl;;
}