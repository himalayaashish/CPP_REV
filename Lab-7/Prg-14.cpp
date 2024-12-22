// 14. C++ Program to Count Frequency of Each Element in an Array:
 
 
#include <iostream>
#include <unordered_map>
using namespace std;

void countFrequency(int arr[], int size) {
    unordered_map<int, int> freq;
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    for (const auto& pair : freq) {
        cout << pair.first << " appears " << pair.second << " times." << endl;
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    countFrequency(arr, size);
    return 0;
}

