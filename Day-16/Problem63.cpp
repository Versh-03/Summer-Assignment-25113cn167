//WAP to find pair with given sum

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr;
    unordered_set<int> st;
    int len, num, target;

    cout << "Enter your array length: ";
    cin >> len;

    cout << "Enter elements: ";
    for (int i = 0; i < len; i++) {
        cin >> num;
        arr.push_back(num);
    }

    cout << "Enter target sum: ";
    cin >> target;

    bool found = false;

    for (int i = 0; i < len; i++) {
        int complement = target - arr[i];

        if (st.find(complement) != st.end()) {
            cout << "Pair found: " << complement
                 << ", " << arr[i] << endl;
            found = true;
            return 0;
        }

        st.insert(arr[i]);
    }

    if (!found) {
        cout << "No pair found." << endl;
    }

    return 0;
}