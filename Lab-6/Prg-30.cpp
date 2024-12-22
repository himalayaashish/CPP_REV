// 30. Program to search all occurrences of a word in a given string:
#include <iostream>
#include <string>
using namespace std;

void findAllOccurrences(const string& str, const string& word) {
    size_t pos = str.find(word, 0);
    bool found = false;
    while (pos != string::npos) {
        cout << "Found at position: " << pos << endl;
        found = true;
        pos = str.find(word, pos + 1);
    }
    if (!found) {
        cout << "Word not found in the string." << endl;
    }
}

int main() {
    string str, word;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the word to find: ";
    cin >> word;

    findAllOccurrences(str, word);

    return 0;
}
