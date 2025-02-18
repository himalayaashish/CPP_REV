// 11. C++ Program to Count Total Number of Negative Elements in an Array:
 
#include <iostream>
using namespace std;

int countNegativeElements(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, -2, 3, -4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Total negative elements: " << countNegativeElements(arr, size) << endl;
    return 0;
}