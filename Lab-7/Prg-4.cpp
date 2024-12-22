// 4. C++ Program to Find Second Largest Element in an Array:
 
 
#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int size) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Second largest element: " << findSecondLargest(arr, size) << endl;
    return 0;
}