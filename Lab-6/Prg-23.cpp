// 23. remove_all_occurrences_char.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter character to remove: ";
    cin >> ch;
    
    str.erase(remove(str.begin(), str.end(), ch), str.end());
    
    cout << "String after removing all occurrences: " << str << endl;

}