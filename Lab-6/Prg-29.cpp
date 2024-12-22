// 29. Program to find the last occurrence of a word in a given string:

#include <iostream>
#include <string>
using namespace std;

int findLastOccurrence(const string& str, const string& word) {
    size_t pos = str.rfind(word);
    if (pos != string::npos)
        return pos;  // Return the position of the last occurrence
    else
        return -1;  // Return -1 if word is not found
}

int main() {
    string str, word;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the word to find: ";
    cin >> word;

    int position = findLastOccurrence(str, word);
    if (position != -1)
        cout << "Last occurrence of the word is at position: " << position << endl;
    else
        cout << "Word not found in the string." << endl;

    return 0;
}