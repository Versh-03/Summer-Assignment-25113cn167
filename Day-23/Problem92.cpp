//WAP to find maximum occuring character in a string

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string str;
    unordered_map<char,int> mp;
    char ch;
    int maxi=0;
    cout<<"Enter your string: ";
    getline(cin,str);

    for(char c: str){
        mp[c]++;
    }

    for(char x: str){
        if(mp[x]>maxi){
            maxi=mp[x];
            ch=x;
        }
    }

    cout<<"Maximum occuring character: "<<ch<<endl;
}