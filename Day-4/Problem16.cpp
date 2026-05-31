//WAP to print Armstrong number in a range;

#include <iostream>
#include <cmath>
using namespace std;
int countDigit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int Armstrong(int n,int c){
    int r,sum=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        sum+=pow(r,c);
    }
    return sum;
}
int main(){
    int lower,upper;
    cout<<"Enter your lower limit: ";
    cin>>lower;
    cout<<"Enter your Upper limit: ";
    cin>>upper;
    for(int i=lower;i<=upper;i++){
        if(i==Armstrong(i,countDigit(i))){ 
            cout<<i<<" ,";
        }
    }
    cout<<endl;
    return 0;
}