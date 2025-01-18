/*1. Write a program to input 10 numbers and store them to a dynamic
 array then find out the average of all the elements of the array.*/

 #include <iostream>
using namespace std;

int main() {
    // Number of elements
    const int size = 10;

    // Dynamically allocate memory for the array
    double* numbers = new double[size];

    // Input numbers
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Calculate the average
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    double average = sum / size;

    // Display the average
    cout << "The average of the entered numbers is: " << average << endl;

    // Release the dynamically allocated memory
    delete[] numbers;

    return 0;
}
