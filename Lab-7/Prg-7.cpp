// 7. C++ Program to Delete an Element from Array at Specified Position:
 
 
#include <iostream>
using namespace std;

void deleteElement(int arr[], int& size, int position) {
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int position = 2; // Position of element to delete
    
    deleteElement(arr, size, position);
    
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}