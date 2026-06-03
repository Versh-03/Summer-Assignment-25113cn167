//WAP for recursive fibonaci series

#include <iostream>
using namespace std;

int fibonaci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return (fibonaci(n-1)+fibonaci(n-2));
    }
}

int main(){
    int num;
    cout<<"Enter number of terms: ";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<fibonaci(i)<<" ,";
    }
    cout<<endl;

    return 0;
}