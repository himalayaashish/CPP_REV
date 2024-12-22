// Write a CPP program to search all occurrences of a character in given string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter character to search: ";
    cin >> ch;
    
    size_t pos = str.find(ch);
    while (pos != string::npos) {
        cout << "Found at index: " << pos << endl;
        pos = str.find(ch, pos + 1);
    }
    
}
