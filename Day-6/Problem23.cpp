//WAP to count number of set bits --> Set bits: No. of 1's in the Binary form

#include <iostream>
using namespace std;

int main(){
    unsigned int num;
    int count=0;
    cout<<"Enter your number: ";
    cin>>num;
    while(num!=0){
        if(num%2==1){
            count++;
        }
        num=num/2;
    }
    cout<<"No. of set bits: "<<count<<endl;
    return 0;
}