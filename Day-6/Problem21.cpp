//WAP to convert decimal to binary

#include <iostream>
using namespace std;

int main(){
    int num, binary[32],i=0;
    cout<<"Enter your number: ";
    cin>>num;
    if(num<0){
        cout<<"Negative numbers not supported"<<endl;
        return 0;
    }

    if(num==0){
        cout<<"Binary form: 0"<<endl;
        return 0;
    }
    while(num!=0){
        binary[i]=num%2;
        num=num/2;
        i++;
    }
    cout<<"Binary form: ";
    for(int j=i-1;j>=0;j--){
        cout<<binary[j];
    }
    cout<<endl;
    return 0;
}