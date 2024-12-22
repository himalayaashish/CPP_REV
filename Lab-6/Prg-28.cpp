// Program to find the first occurrence of a word in a given string
#include <iostream>
#include <string>
using namespace std;

int findFirstOccurrence(const string& str, const string& word) {
    size_t pos = str.find(word);
    if (pos != string::npos)
        return pos;  
    else
        return -1;  
}

int main() {
    string str, word;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the word to find: ";
    cin >> word;

    int position = findFirstOccurrence(str, word);
    if (position != -1)
        cout << "First occurrence of the word is at position: " << position << endl;
    else
        cout << "Word not found in the string." << endl;
}
