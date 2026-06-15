//WAP to implement insertion sort

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
    for(int i=1;i<n;i++){
        int x=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    cout<<"Sorted array: ";
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}