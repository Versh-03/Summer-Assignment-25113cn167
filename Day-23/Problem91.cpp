//WAP to check anagram strings

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string str1,str2;
    unordered_map<char,int> mp;

    cout<<"Enter your 1st string: ";
    getline(cin,str1);
    cout<<"Enter your 2nd string: ";
    getline(cin,str2);

    for(char c: str1){
        mp[c]++;
    }

    for(char x: str2){
        mp[x]--;
    }
    
    for(auto x: mp){
        if(x.second!=0){
            cout<<"Not anagram"<<endl;
            return 0;
        }
    }
    cout<<"Anagram strings"<<endl;
    return 0;

}