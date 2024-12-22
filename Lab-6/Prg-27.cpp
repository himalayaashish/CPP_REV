// 27_replace_all_occurrences_char.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char oldChar, newChar;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter character to replace: ";
    cin >> oldChar;
    cout << "Enter new character: ";
    cin >> newChar;
    
    for (char &ch : str) {
        if (ch == oldChar) {
            ch = newChar;
        }
    }
    
    cout << "String after replacing all occurrences: " << str << endl;

}