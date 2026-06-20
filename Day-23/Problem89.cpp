//WAP to find first non repeating character in a string

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
        if(mp[x]==1){
            cout<<"First non repeating character: "<<x<<endl;
            return 0;
        }
    }
    cout<<"No non repeating character found "<<endl;
    return 0;

}