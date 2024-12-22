// 21.remove_first_occurrence_char
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
    
    size_t pos = str.find(ch);
    if (pos != string::npos) {
        str.erase(pos, 1);
    }
    
    cout << "String after removing first occurrence: " << str << endl;

}