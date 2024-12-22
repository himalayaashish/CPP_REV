// 19. C++ Program to Sort Array Elements in Ascending Order:
 
 
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size);

    cout << "Array in ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

