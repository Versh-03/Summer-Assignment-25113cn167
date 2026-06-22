//WAP to sort words by length

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
    return a.length()<b.length();
}

int main(){
    int n;
    string name;
    vector<string> names;

    cout<<"Enter number of words: ";
    cin>>n;
    cin.ignore(); //ignores the \n in input buffer
    cout<<"Enter words: "<<endl;
    for(int i=0;i<n;i++){
        getline(cin,name);
        names.push_back(name);
    }

    sort(names.begin(),names.end(),compare);

    for(string x: names){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;

}