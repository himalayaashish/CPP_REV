// 12. C++ Program to Count Total Number of Duplicate Elements in an Array:
 
 
#include <iostream>
#include <unordered_map>
using namespace std;

int countDuplicateElements(int arr[], int size) {
    unordered_map<int, int> freq;
    int duplicates = 0;
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    for (const auto& pair : freq) {
        if (pair.second > 1) {
            duplicates++;
        }
    }
    return duplicates;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Total duplicate elements: " << countDuplicateElements(arr, size) << endl;
    return 0;
}

