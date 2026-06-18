//WAP to convert lower case to uppercase

//WAP to find string length without strlen()

#include <cctype>
#include <iostream>
using namespace std;

int main(){
    string str;
    int len=0;
    cout<<"Enter a string: ";
    getline(cin,str); //Deals with spaces
    for(char &c: str){ //Using the true value via reference instead of creating copies
        if(islower(c)){
            c-=32;
        }
    }

    cout<<"Updated string: "<<str<<endl;
    return 0;
}