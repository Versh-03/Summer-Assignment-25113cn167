//WAP to find string length without strlen()

#include <iostream>
using namespace std;

int main(){
    string str;
    int len=0;
    cout<<"Enter a string: ";
    getline(cin,str); //Deals with spaces
    while(str[len]!='\0'){
        len++;
    }

    cout<<"Length of entered string: "<<len<<endl;
    return 0;
}