// 34. Program to remove all occurrences of a word in a given string:

#include <iostream>
#include <string>
using namespace std;

string removeAllOccurrences(string str, const string& word) {
    size_t pos = str.find(word);
    while (pos != string::npos) {
        str.erase(pos, word.length());
        pos = str.find(word, pos);
    }
    return str;
}

int main() {
    string str, word;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the word to remove: ";
    cin >> word;

    str = removeAllOccurrences(str, word);
    cout << "String after removal: " << str << endl;

    return 0;
}