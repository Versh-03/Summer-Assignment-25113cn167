//WAP to rotate an array right

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int num,len,last;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }
    last=arr[len-1];
    for(int i=len-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}