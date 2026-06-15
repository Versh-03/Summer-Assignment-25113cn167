//WAP to implement bubble sort

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
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    cout<<"Enter your numbers: ";
    arr=inputArr(n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted array: ";
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}