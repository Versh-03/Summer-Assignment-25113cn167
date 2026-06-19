//WAP to check palindrome strings

#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int start = 0;
    int end = str.length() - 1;

    bool palindrome=true;
    while(start<end){
        if(str[start]!=str[end]){ 

            palindrome=false;
            break;
        }
        start++;
        end--;
    }
    if(palindrome){
        cout<<str<<" is Palindrome"<<endl;
    }
    else{
        cout<<str<<" is not Palindrome"<<endl;
    }
    return 0;

}