// Write a C program to count total number of vowels and consonants in a string.
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    int vowels = 0, consonants = 0;
    
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
}
