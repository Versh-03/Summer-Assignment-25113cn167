//WAP to count words in a sentence

#include <iostream>
using namespace std;

int main() {
    string str;
    int count = 0;
    bool inWord = false;

    cout << "Enter a sentence: ";
    getline(cin, str);

    for (char ch : str) {
        if (ch != ' ' && !inWord) {
            count++;
            inWord = true;
        }
        else if (ch == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words = " << count<<endl;

    return 0;
}