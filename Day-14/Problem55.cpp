//WAP to print second largest element

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int num,len;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    cout<<"Second largest element: "<<arr[len-2]<<endl;

    return 0;
}