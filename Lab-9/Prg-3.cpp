// Define a class MyCommonMethods2 that consist of following methods
// a. Table, takes a parameter and print the table.
// b. Ascii, that print all ASCII character with their values.
// c. Largest, takes a parameter and find out largest number.
// d. Reverse, takes a parameter find out the reverse of the given number.
// e. Prime, takes a parameter and find out whether it is prime number or not.
// f. Allprime1to500, print all Armstrong number that’s comes between1 to 500 and also
// print how many they are.
// And test all the methods. 

#include <iostream>
using namespace std;

class MyCommonMethods2 {
public:
    void table(int num) {
        cout << "Table of " << num << ":\n";
        for (int i = 1; i <= 10; ++i) {
            cout << num << " x " << i << " = " << num * i << endl;
        }
    }

    void ascii() {
        for (int i = 32; i <= 126; ++i) {
            cout << i << " = " << char(i) << endl;
        }
    }

    int largest(int a, int b, int c) {
        return max(a, max(b, c));
    }

    int reverse(int num) {
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        return reversed;
    }

    bool is_prime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }

    void allprime1to500() {
        int count = 0;
        cout << "Armstrong numbers from 1 to 500 are:\n";
        for (int num = 1; num <= 500; ++num) {
            int sum = 0, temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                sum += digit * digit * digit;
                temp /= 10;
            }
            if (sum == num) {
                cout << num << " ";
                ++count;
            }
        }
        cout << "\nTotal Armstrong numbers: " << count << endl;
    }
};

int main() {
    
    MyCommonMethods2 methods;

    
    methods.table(5);

    
    methods.ascii();

    
    cout << "Largest Number: " << methods.largest(3, 7, 5) << endl;

    
    cout << "Reversed Number: " << methods.reverse(12345) << endl;

   
    cout << "Is Prime: " << (methods.is_prime(29) ? "Yes" : "No") << endl;

    // Testing allprime1to500
    methods.allprime1to500();

    return 0;
}
