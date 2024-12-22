// 32. Program to remove the first occurrence of a word from a string:

#include <iostream>
#include <string>
using namespace std;

string removeFirstOccurrence(string str, const string& word) {
    size_t pos = str.find(word);
    if (pos != string::npos) {
        str.erase(pos, word.length());
    }
    return str;
}

int main() {
    string str, word;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the word to remove: ";
    cin >> word;

    str = removeFirstOccurrence(str, word);
    cout << "String after removal: " << str << endl;

    return 0;
}
