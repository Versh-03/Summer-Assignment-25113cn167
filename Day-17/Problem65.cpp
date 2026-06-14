//WAP to merge two arrays

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
    vector<int> arr1,arr2;
    int n;
    cout<<"Enter length of array1: ";
    cin>>n;
    cout<<"Enter your numbers: ";
    arr1=inputArr(n);

    cout<<"Enter length of array2: ";
    cin>>n;
    cout<<"Enter your numbers: ";
    arr2=inputArr(n);

    arr1.insert(arr1.end(),arr2.begin(),arr2.end());
    cout<<"Merged array: ";
    for(int x: arr1){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}