//WAP to find intersection of two arrays

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
    set<int> st,result;
    int n;
    cout<<"Enter length of array1: ";
    cin>>n;
    cout<<"Enter your numbers: ";
    arr1=inputArr(n);
    st.insert(arr1.begin(),arr1.end());

    cout<<"Enter length of array2: ";
    cin>>n;
    cout<<"Enter your numbers: ";
    arr2=inputArr(n);
    for(int x: arr2){
        if(st.find(x)!=st.end()){
            result.insert(x);
        }
    }
    vector<int> newArr(result.begin(),result.end());
    cout<<"Intersection of two arrays: "<<endl;
    for(int x: newArr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}