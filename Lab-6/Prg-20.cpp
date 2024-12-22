// 20. Write a CPP program to count frequency of each character in a string.
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    map<char, int> freq;
    for (char ch : str) {
        if (ch != ' ') {
            freq[ch]++;
        }
    }
    
    cout << "Character frequencies:" << endl;
    for (auto &entry : freq) {
        cout << entry.first << ": " << entry.second << endl;
    }
    return 0;
}