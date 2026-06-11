//WAP to find duplicates in an array

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
    vector<int> arr;
    unordered_map<int,int> mp;
    int num,len,count=0;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
        mp[num]++;
    }
    cout<<"Duplicates are: ";
    for(auto x: mp){
        if(x.second>1){
            cout<<x.first<<", ";
            count++;
        }
    }
    if(count==0){
        cout<<"None";
    }
    cout<<endl;
    return 0;

}