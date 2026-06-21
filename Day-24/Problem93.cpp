//WAP to check string rotation

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1,str2,temp;
    cout<<"Enter 1st string: ";
    getline(cin,str1);
    cout<<"Enter 2nd string: ";
    getline(cin,str2);

    temp=str1+str1;
    if(temp.find(str2)==string::npos){
        cout<<"Rotation not possible"<<endl;
    }
    else{
        cout<<"Rotation possible"<<endl;
    }

    return  0;

}