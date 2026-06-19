//WAP to character frequency

#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;
    map<char, int> mp;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        mp[ch]++;
    }

    cout << "Character Frequencies:\n";

    for (auto x : mp) {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}