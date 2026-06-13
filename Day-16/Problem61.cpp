//WAP to find missing number in array.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr,rev;
    int sum=0,actSum=0;
    int num,len;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
        sum+=num;
    }
    actSum=(len*(len-1))/2;
    cout<<"Missing number: "<<actSum-sum<<endl;
    return 0;
}