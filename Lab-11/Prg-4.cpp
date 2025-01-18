// 4.  Write a program to input 10 numbers from the keyboard and store them in to dynamic array find largest among them.

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

    // Find the largest number
    int largest = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    // Display the largest number
    cout << "The largest number is: " << largest << endl;

    // Release the dynamically allocated memory
    delete[] numbers;
}
