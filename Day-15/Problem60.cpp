//WAP to move zeroes to end

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int num,len;
    int left=0;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }
    for(int i=0;i<len;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[left]);
            left++;
        }
    }
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}