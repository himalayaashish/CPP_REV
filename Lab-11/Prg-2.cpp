// 2.  Write a program to take 10 values in a dynamic array then find out how many elements are even and odd.

#include <iostream>
using namespace std;

int main() {
    // Number of elements
    const int size = 10;

    // Dynamically allocate memory for the array
    int* numbers = new int[size];

    // Input numbers
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Count even and odd numbers
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Display the results
    cout << "Number of even elements: " << evenCount << endl;
    cout << "Number of odd elements: " << oddCount << endl;

    // Release the dynamically allocated memory
    delete[] numbers;
}
