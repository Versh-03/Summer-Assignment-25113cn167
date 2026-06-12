//WAP to rotate array by left

#include <iostream>
#include <vector>
using namespace std;
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int num,len,first;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }
    first=arr[0];
    for(int i=0;i<len-1;i++){
        arr[i]=arr[i+1];
    }
    arr[len-1]=first;
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}