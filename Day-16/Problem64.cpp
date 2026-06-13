//WAP to remove duplicates from array

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    vector<int> arr,rev;
    unordered_set<int> st; //set removes duplicate item by default
    int num,len,count=0;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }

    for(auto x: st){
        if(st.find(x)==st.end()){
            cout<<x<<" ";
            st.insert(x);
        }
    }
    cout<<endl;
    return 0;
}