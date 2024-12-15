//  Program to check whether the entered alphabet is a vowel or consonant (C++).
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is a consonant." << endl;
    }

    return 0;
}