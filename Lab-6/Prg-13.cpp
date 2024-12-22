// Write a CPP program to reverse order of words in a given string.
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

string reverseWords(const string& str) {
    stringstream ss(str);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    string reversed;
    for (auto it = words.rbegin(); it != words.rend(); ++it) {
        reversed += *it;
        if (it + 1 != words.rend()) {
            reversed += " ";
        }
    }

    return reversed;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string reversed = reverseWords(input);

    cout << "Reversed order of words: " << reversed << endl;
}