//WAP to input and display an array

#include <iostream>
using namespace std;

int main(){
    int range;
    cout<<"Enter length of your array: ";
    cin>>range;
    int arr[range];
    for(int i=0;i<range;i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }

    cout<<"The array is: "<<endl;
    cout<<"[";
    for(int i=0;i<range;i++){
        cout<<arr[i]<<", ";
    }
    cout<<"]"<<endl;
}