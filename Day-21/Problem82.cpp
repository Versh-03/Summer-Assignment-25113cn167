//WAP to reverse a string

//WAP to find string length without strlen()

#include <iostream>
using namespace std;

int main(){
    string str;
    int end,start=0;
    cout<<"Enter a string: ";
    getline(cin,str); //Deals with spaces
    end=str.length()-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }

    cout<<"Reversed string: "<<str<<endl;
    return 0;
}