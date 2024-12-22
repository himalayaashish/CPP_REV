// 22. remove_last_occurrence_char
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
    
    size_t pos = str.rfind(ch);
    if (pos != string::npos) {
        str.erase(pos, 1);
    }
    
    cout << "String after removing last occurrence: " << str << endl;

}