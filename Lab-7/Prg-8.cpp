// 8. C++ Program to Print All Unique Elements in the Array:
 
 
#include <iostream>
#include <unordered_map>
using namespace std;

void printUniqueElements(int arr[], int size) {
    unordered_map<int, int> freq;
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    for (const auto& pair : freq) {
        if (pair.second == 1) {
            cout << pair.first << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Unique elements: ";
    printUniqueElements(arr, size);
    return 0;
}