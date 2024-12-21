// Define a function to display Ascii character with their values.
#include <iostream>
using namespace std;

void display_ascii() {
    for (int i = 0; i < 128; i++) {
        cout << "ASCII " << i << ": " << (char)i << endl;
    }
}

int main() {
    display_ascii();
}
