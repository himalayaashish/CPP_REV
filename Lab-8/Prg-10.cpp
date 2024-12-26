// 10. Dynamic Data Assignment:
// Define a class Temperature with an attribute celsius (float).
// Write member functions to:
// •	Convert the Celsius temperature to Fahrenheit.
// •	Print both Celsius and Fahrenheit values.
// Test the class with an object.
#include <iostream>
using namespace std;

class Temperature {
    float celsius;

public:
    void set_temperature(float temp) {
        celsius = temp;
    }

    float to_fahrenheit() const {
        return (celsius * 9.0 / 5.0) + 32;
    }

    void display_temperature() const {
        cout << "Celsius: " << celsius << "°C, Fahrenheit: " << to_fahrenheit() << "°F" << endl;
    }
};

int main() {
    Temperature temp;
    temp.set_temperature(25.0);
    cout << "Temperature Details:\n";
    temp.display_temperature();
}
