// 6. C++ Program to Insert an Element in an Array:
 
 
#include <iostream>
using namespace std;

void insertElement(int arr[], int& size, int element, int position) {
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 10, position = 2;
    
    insertElement(arr, size, element, position);
    
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

