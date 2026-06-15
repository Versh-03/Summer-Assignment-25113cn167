//WAP to implement binary search

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> inputArr(int n){
    vector<int> arr;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }

    return arr;
}


int main(){
    vector<int> arr;
    int n,search,high,low=0;
    cout<<"Enter length of array: ";
    cin>>n;
    cout<<"Enter your numbers: ";
    arr=inputArr(n);
    cout<<"Enter number to be searched: ";
    cin>>search;
    sort(arr.begin(),arr.end()); //Binary Search works pnly for sorted arrays
    high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==search){
            cout<<"Element found at index: "<<mid+1<<endl;
            return 0;
        }
        else if(arr[mid]<search){
            low=mid+1;
        }
        else if(arr[mid]>search){
            high=mid-1;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}