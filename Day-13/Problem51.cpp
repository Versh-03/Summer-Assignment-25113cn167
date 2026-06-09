//WAP to find the largest and smallest element

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int len,num;
    cout<<"Enter length of array: ";
    cin>>len;
    cout<<"Enter array elements: "<<endl;

    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());

    cout<<"The smallest element: "<<arr[0]<<endl;
    cout<<"The largest element: "<<arr[len-1]<<endl;

    return 0;
}