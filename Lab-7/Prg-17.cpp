// 17. C++ Program to Put Even and Odd Elements of Array in Two Separate Arrays:
 
 
#include <iostream>
using namespace std;

void separateEvenOdd(int arr[], int size, int even[], int& evenSize, int odd[], int& oddSize) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenSize++] = arr[i];
        } else {
            odd[oddSize++] = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int even[size], odd[size];
    int evenSize = 0, oddSize = 0;

    separateEvenOdd(arr, size, even, evenSize, odd, oddSize);

    cout << "Even elements: ";
    for (int i = 0; i < evenSize; i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd elements: ";
    for (int i = 0; i < oddSize; i++) {
        cout << odd[i] << " ";
    }
    return 0;
}
