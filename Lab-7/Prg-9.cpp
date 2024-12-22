// 9. C++ Program to Print All Negative Elements in an Array:
#include <iostream>
using namespace std;

void printNegativeElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Negative elements: ";
    printNegativeElements(arr, size);
    return 0;
}