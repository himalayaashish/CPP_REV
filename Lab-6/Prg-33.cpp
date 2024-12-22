// 33. Program to remove the last occurrence of a word in a given string:

#include <iostream>
#include <string>
using namespace std;

string removeLastOccurrence(string str, const string& word) {
    size_t pos = str.rfind(word);
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

    str = removeLastOccurrence(str, word);
    cout << "String after removal: " << str << endl;

    return 0;
}
