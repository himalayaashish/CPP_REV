// 17.	Write a CPP program to count occurrences of a character in given string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter character to count: ";
    cin >> ch;
    
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch)
            count++;
    }
    
    cout << "Occurrences of character: " << count << endl;
}
