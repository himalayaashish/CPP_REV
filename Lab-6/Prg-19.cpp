// 19. Write a CPP program to find lowest frequency character in a string.

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    map<char, int> freq;
    for (char ch : str) {
        if (ch != ' ') {
            freq[ch]++;
        }
    }
    
    char minChar = ' ';
    int minFreq = INT_MAX;
    for (auto &entry : freq) {
        if (entry.second < minFreq) {
            minFreq = entry.second;
            minChar = entry.first;
        }
    }
    
    cout << "Lowest frequency character: " << minChar << " with frequency " << minFreq << endl;

}