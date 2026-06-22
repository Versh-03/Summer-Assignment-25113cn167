//WAP to find comman characters in two strings

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter string 1: ";
    getline(cin,str1);
    cout<<"Enter string 2: ";
    getline(cin,str2);

    set<char> st(str1.begin(),str1.end());

    for(char c: str2){
        if(st.count(c)){
            cout<<c;
            st.erase(c);
        }
    }
    cout<<endl;

    return 0;
}