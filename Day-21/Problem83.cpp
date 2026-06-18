//WAP to count vowels and consonants

#include <cctype>
#include <iostream>
using namespace std;

int main(){
    string str;
    int Vowelcount=0,Consonantscount=0;
    cout<<"Enter a string: ";
    getline(cin,str); //Deals with spaces
    for(char x: str){
        x=tolower(x);
        if(x>='a'&&x<='z'){
            if(x=='a'||x=='e'||x=='o'||x=='i'||x=='u'){
                Vowelcount++;
            }
            else{
                Consonantscount++;
            }
        }
    }
    if(Vowelcount==0 && Consonantscount==0){
        cout<<"No alphabet found"<<endl;
    }
    else{
        cout<<"Vowel Count: "<<Vowelcount<<endl;
        cout<<"Consonant count: "<<Consonantscount<<endl;
    }
    return 0;
}