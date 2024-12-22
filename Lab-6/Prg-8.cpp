// Write a C program to find total number of alphabets, digits or special character in a string.
#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    int alphabets = 0, digits = 0, specialChars = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i]))
            alphabets++;
        else if (isdigit(str[i]))
            digits++;
        else
            specialChars++;
    }
    
    cout << "Alphabets: " << alphabets << ", Digits: " << digits << ", Special characters: " << specialChars << endl;
}
