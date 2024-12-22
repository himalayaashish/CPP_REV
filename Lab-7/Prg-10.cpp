// 10. C++ Program to Count Total Number of Even and Odd Elements in an Array:
 
 
#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int size) {
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "Even count: " << evenCount << ", Odd count: " << oddCount << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    countEvenOdd(arr, size);
    return 0;
}
