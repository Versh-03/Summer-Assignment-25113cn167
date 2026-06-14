//WAP to find common elements

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> inputArr(int n) {
    vector<int> arr;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr.push_back(num);
    }
    return arr;
}

vector<int> commonWithDuplicates(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> freq;
    vector<int> result;

    for (int x : arr1)
        freq[x]++;          

    for (int x : arr2) {
        if (freq[x] > 0) {   
            result.push_back(x);
            freq[x]--;       
        }
    }
    return result;
}

void printArr(vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    int n;

    cout << "Enter length of array1: ";
    cin >> n;
    cout << "Enter your numbers: ";
    vector<int> arr1 = inputArr(n);

    cout << "Enter length of array2: ";
    cin >> n;
    cout << "Enter your numbers: ";
    vector<int> arr2 = inputArr(n);

    vector<int> result = commonWithDuplicates(arr1, arr2);

    cout << "Common elements: ";
    printArr(result);

    return 0;
}