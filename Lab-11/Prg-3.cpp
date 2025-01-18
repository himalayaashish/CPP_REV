// 3.  Write a program to take 10 values in a dynamic array and take number from the keyboard and find out whether the number is present in the array or not.
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

    // Input the number to search
    int searchNumber;
    cout << "Enter a number to search: ";
    cin >> searchNumber;

    // Search for the number in the array
    bool isFound = false;
    for (int i = 0; i < size; i++) {
        if (numbers[i] == searchNumber) {
            isFound = true;
            break;
        }
    }

    // Display the result
    if (isFound) {
        cout << "The number " << searchNumber << " is present in the array." << endl;
    } else {
        cout << "The number " << searchNumber << " is NOT present in the array." << endl;
    }

    // Release the dynamically allocated memory
    delete[] numbers;


}
