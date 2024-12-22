// 5. C++ Program to Copy All Elements from One Array to Another Array:
 
 
#include <iostream>
using namespace std;

void copyArray(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[i];
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[size];
    
    copyArray(arr1, arr2, size);
    
    cout << "Elements of second array: ";
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}