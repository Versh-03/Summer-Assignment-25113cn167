//WAP to compress a string

#include <iostream>
using namespace std;

int main(){
    string str;
    int count = 1;

    cout<<"Enter your string: ";
    getline(cin,str);

    for(int i = 0; i < str.length(); i++) {
        if(i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
        }
        else {
            cout << str[i] << count;
            count = 1;
        }
    }

    cout<<endl;
    return 0;
}