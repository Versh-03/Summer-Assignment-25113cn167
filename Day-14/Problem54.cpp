//WAP to print frequency of an element

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int search,num,len,count=0;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }

    cout<<"Enter element to count: ";
    cin>>search;
    for(int x: arr){
        if(x==search){
            count++;
        }
    }

    cout<<"Frequency of "<<search<<": "<<count<<endl;

}