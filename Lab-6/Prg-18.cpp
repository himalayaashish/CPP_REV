
// Write a C program to find highest frequency character in a string.
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    unordered_map<char, int> freq;
    
    for (char ch : str) {
        freq[ch]++;
    }
    
    char maxChar;
    int maxFreq = 0;
    
    for (auto& pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            maxChar = pair.first;
        }
    }
    
    cout << "Highest frequency character: " << maxChar << " with frequency: " << maxFreq << endl;
}
