// 1. C++ Program to Read and Print Elements of Array using Recursion:

#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index = 0) {
    if (index == size)
        return;
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array elements: ";
    printArray(arr, size);
    return 0;
}