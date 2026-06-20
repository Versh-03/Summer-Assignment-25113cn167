//WAP to find the first repeating character in a string

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string str;
    unordered_map<char,int> mp;

    cout<<"Enter your string: "<<endl;
    getline(cin,str);
    for(char c: str){
        mp[c]++;
    }

    for(char x: str){
        if(mp[x]>1){
            cout<<"First repeating character: "<<x<<endl;
            return 0;
        }
    }
    cout<<"All unique character present"<<endl;
    return 0;

}