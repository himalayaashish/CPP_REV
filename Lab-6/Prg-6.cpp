// Write a CPP program to convert uppercase string to lowercase.
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    
    cout << "Lowercase string: " << str << endl;

}
