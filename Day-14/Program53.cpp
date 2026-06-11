//WAP to linear search

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int search,num,len;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }

    cout<<"Enter element to be searched: ";
    cin>>search;
    for(int i=0;i<len;i++){
        if(search==arr[i]){
            cout<<"Element found at: "<<i+1<<" postion"<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;

}