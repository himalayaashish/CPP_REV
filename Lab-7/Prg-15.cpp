// 15. C++ Program to Merge Two Arrays into a Third Array:
 
 
#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1) {
        result[k++] = arr1[i++];
    }
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, result);

    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << result[i] << " ";
    }
    return 0;
}

