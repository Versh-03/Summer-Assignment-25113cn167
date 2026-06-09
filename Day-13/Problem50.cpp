//WAP to print sum and average of an array

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    int len,num,sum=0;
    cout<<"Enter length of your array: ";
    cin>>len;
    cout<<"Enter elements: ";
    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);

    }
    for(int x: arr){
        sum+=x;
    }

    cout<<"The sum of array is: "<<sum<<endl;
    cout<<"The average of array is: "<<sum/len<<endl;


}