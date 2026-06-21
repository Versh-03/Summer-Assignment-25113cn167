//WAP to find the longest word

#include <iostream>
using namespace std;

int main(){
    string str, word="",longWord="";
    
    cout<<"Enter your string: ";
    getline(cin,str);

    for(char c: str){
        if(c!=' '){
            word+=c;
        }
        else{
            if(word.size()>longWord.size()){
                longWord=word;
            }
            word="";
        }
    }

    if(word.size()>longWord.size()){
        cout<<"Longest word: "<<word<<endl;
    }
    else{
        cout<<"Longest word: "<<longWord<<endl;
    }

    return 0;
}