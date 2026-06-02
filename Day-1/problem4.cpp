//WAP to count digits in a number

#include <iostream>
using namespace std;

int main(){
    int num,count=0;
    cout<<"Enter number: ";
    cin>>num;
    if(num==0){
        cout<<"The number of digits: "<<1<<endl;
        return 0;
    }
    while(num!=0){
        num=num/10;
        count++;
    }

    cout<<"The number of digits: "<<count<<endl;
}