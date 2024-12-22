// 26_replace_last_occurrence_char.cpp
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
    
    size_t pos = str.rfind(oldChar);
    if (pos != string::npos) {
        str[pos] = newChar;
    }
    
    cout << "String after replacing last occurrence: " << str << endl;

}
