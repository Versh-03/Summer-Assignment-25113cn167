//WAP to find union of two array

#include <iostream>
#include <vector>
#include <set>
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
    set<int> st;
    int n;
    cout<<"Enter length of array1: ";
    cin>>n;
    cout<<"Enter your numbers: ";
    arr1=inputArr(n);

    cout<<"Enter length of array2: ";
    cin>>n;
    cout<<"Enter your numbers: ";
    arr2=inputArr(n);

    for(int x: arr1){
        st.insert(x);
    }
    for(int x: arr2){
        st.insert(x);
    }

    vector<int> newArr(st.begin(),st.end());
    cout<<"Union of the two array: ";
    for(int x: newArr){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}