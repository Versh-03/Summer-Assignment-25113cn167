//WAP to convert binary into decimal form

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector <int> binary;
    int num,bits,decimal=0,a=0;
    cout<<"Enter number of bits: ";
    cin>>bits;
    if(bits<=0){
        cout<<"Invalid number of bits"<<endl;
        return 0;
    }
    cout<<"Enter the bits with a space: "<<endl<<"Example: 0 1 0 0"<<endl;
    for(int i=0;i<bits;i++){
        cin>>num;
        if(num!=0 && num!=1){
            cout<<"Invalid binary digit"<<endl;
            return 0;
        }           
        binary.push_back(num);
    }
    for(int i=bits-1;i>=0;i--){
        decimal+=binary[i]*pow(2,a);
        a++;
    }
    cout<<"Decimal form: "<<decimal<<endl;
    return 0;
}