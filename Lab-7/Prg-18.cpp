
// 18. C++ Program to Search an Element in an Array:
 
 
#include <iostream>
using namespace std;

int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;  // Element found, return index
        }
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 3;

    int index = searchElement(arr, size, element);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    return 0;
}

