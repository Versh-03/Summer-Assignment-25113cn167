//WAP to create voting eligiblity system

#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age<0 || age>120){ //Dealing with absurd ages
        cout<<"Invalid age"<<endl;
    }
    else if(age>=18){
        cout<<"Eligible to vote"<<endl;
    }
    else if(age<18){
        cout<<"Not eligible to vote"<<endl;
    }

    return 0;
}