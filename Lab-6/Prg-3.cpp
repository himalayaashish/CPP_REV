// Write a CPP program to concatenate two strings.
#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    string result = str1 + str2;
    cout << "Concatenated string: " << result << endl;
}
