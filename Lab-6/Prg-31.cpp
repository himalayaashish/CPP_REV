// 31. Program to count occurrences of a word in a given string:

#include <iostream>
#include <string>
using namespace std;

int countOccurrences(const string& str, const string& word) {
    int count = 0;
    size_t pos = str.find(word, 0);
    while (pos != string::npos) {
        count++;
        pos = str.find(word, pos + 1);
    }
    return count;
}

int main() {
    string str, word;
    cout << "Enter the string: ";
    getline(cin, str);
    cout << "Enter the word to count: ";
    cin >> word;

    int count = countOccurrences(str, word);
    cout << "The word occurs " << count << " times in the string." << endl;

    return 0;
}
