// Write a CPP program to toggle case of each character of a string.
#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }
    
    cout << "Toggled case string: " << str << endl;

}
