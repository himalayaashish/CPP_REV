// 13. C++ Program to Delete All Duplicate Elements from an Array:
 
 
#include <iostream>
#include <unordered_set>
using namespace std;

void deleteDuplicates(int arr[], int& size) {
    unordered_set<int> uniqueElements;
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        if (uniqueElements.find(arr[i]) == uniqueElements.end()) {
            arr[newSize++] = arr[i];
            uniqueElements.insert(arr[i]);
        }
    }
    size = newSize;  // Update the size after removal
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    deleteDuplicates(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

