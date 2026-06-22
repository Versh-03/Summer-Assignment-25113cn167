//WAP to merge two sorted arrays

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
    vector<int> arr1,arr2, result;
    int n,i=0,j=0;
    cout<<"Enter length of sorted array 1: ";
    cin>>n;
    cout<<"Enter elements: ";
    arr1=inputArr(n);
    cout<<"Enter length of sorted array 2: ";
    cin>>n;
    cout<<"Enter elements: ";
    arr2=inputArr(n);

    while(i < arr1.size() && j < arr2.size()) {
        if(arr1[i] <= arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        }
        else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    while(i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }

    while(j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }

    for(int x : result)
        cout << x << " ";
    cout<<endl;
    return 0;
}