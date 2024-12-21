// Define a function that take three parameters a, b, c respectively and solve quadratic
// equation then if possible then return solution of equation otherwise simply print the
// solution. 
#include <iostream>
#include <cmath>
using namespace std;

void solve_quadratic(int a, int b, int c) {
    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
        return;
    }

    int discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        float root = -b / (2 * a);
        cout << "Roots are real and equal: " << root << endl;
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex: " << realPart << " + " << imaginaryPart << "i and "
             << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    int a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;
    solve_quadratic(a, b, c);
}
