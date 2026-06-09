//WAP to count odd and even elements

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num,len,evenCount=0,oddCount=0;
    vector<int> arr;
    cout<<"Enter your array length: ";
    cin>>len;
    cout<<"Enter your elements: ";

    for(int i=0;i<len;i++){
        cin>>num;
        arr.push_back(num);
    }

    for(int x: arr){
        if(x%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    cout<<"No. of Even elements: "<<evenCount<<endl;
    cout<<"No. of Odd element: "<<oddCount<<endl;

    return 0;
}