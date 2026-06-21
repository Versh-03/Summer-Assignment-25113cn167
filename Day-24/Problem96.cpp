//WAP to remove duplicate characters

#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    string str, ans="";
    unordered_set<char> st;

    cout<<"Enter your string: ";
    getline(cin,str);

    for(char c: str){
        if(st.find(c)==st.end()){
            ans+=c;
            st.insert(c);
        }
    }
    cout<<"After removing duplicates: "<<ans<<endl;
    return 0;

}
