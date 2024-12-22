// Write a C program to check whether a string is palindrome or not.
#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    string revStr = string(str.rbegin(), str.rend());
    
    if (str == revStr)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;
    
}
