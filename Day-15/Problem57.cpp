//WAP to reverse an array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr,rev;
    int num,len,count=0;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }
    cout<<"Reversed array: "<<endl<<"[";
    for(int i=len-1;i>=0;i--){
        cout<<arr[i]<<", ";
        rev.push_back(arr[i]); //Saving reversed array for future use
    }
    cout<<"]"<<endl;

    return 0;
}