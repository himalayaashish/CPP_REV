// Define a function that takes radius and calculate area & circumference and both to the
// caller of function.
#include <iostream>
using namespace std;

void calculate_circle(float radius, float &area, float &circumference) {
    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;
}

int main() {
    float radius, area, circumference;
    cout << "Enter radius: ";
    cin >> radius;
    calculate_circle(radius, area, circumference);
    cout << "Area: " << area << ", Circumference: " << circumference << endl;
}
