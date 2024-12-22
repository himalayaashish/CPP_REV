// Write a CPP program to find reverse of a string.
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    string revStr = string(str.rbegin(), str.rend());
    
    cout << "Reversed string: " << revStr << endl;
}
