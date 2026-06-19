//WAP to remove spaces from string

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str,result;
    cout<<"Enter a string: ";
    getline(cin,str);
    for(char c: str){
        if(c!=' '){
            result+=c;
        }
    }

    cout<<"String after removing spaces: \n"<<result<<endl;

    return 0;
}