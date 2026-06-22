//WAP to sort names alphabetically

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    string name;
    vector<string> names;

    cout<<"Enter number of names: ";
    cin>>n;
    cin.ignore(); //ignores the \n in input buffer
    cout<<"Enter names: "<<endl;
    for(int i=0;i<n;i++){
        getline(cin,name);
        names.push_back(name);
    }

    sort(names.begin(),names.end());

    for(string x: names){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}