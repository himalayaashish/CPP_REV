// 3. C++ Program to Find Maximum and Minimum Element in an Array using Recursion:
 
 
#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int& min, int& max, int index = 0) {
    if (index == size)
        return;
    if (arr[index] < min)
        min = arr[index];
    if (arr[index] > max)
        max = arr[index];
    findMinMax(arr, size, min, max, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0], max = arr[0];
    findMinMax(arr, size, min, max);
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
    return 0;
}