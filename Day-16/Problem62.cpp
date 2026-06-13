//WAP to find maximum frequency element

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int> arr,rev;
    unordered_map<int,int> mp;
    int num,len,maxElement,count=0;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
        mp[num]++;
    }
    maxElement=arr[0];
    for(auto x: mp){
        if(x.second>count){
            count=x.second;
            maxElement=x.first;
        }
    }
    cout<<"Element with max frequency: "<<maxElement;
    return 0;
}