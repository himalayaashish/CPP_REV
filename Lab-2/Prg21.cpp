// A certain grade of steel is graded according to the following conditions:
// a. Hardness must be greater than 50
// b. Carbon content must be less than 0.7
// c. Tensile strength must be greater than 5600
// d. The grades are as follows: Grade is 10 if all three conditions are met
// e. Grade is 9 if conditions (i) and (ii) are met
// f. Grade is 8 if conditions (ii) and (iii) are met
// g. Grade is 7 if conditions (i) and (iii) are met
// h. Grade is 6 if only one condition is met
// i. Grade is 5 if none of the conditions are met
// Write a program, which will require the user to give values of hardness, carbon content and
// tensile strength of the steel under consideration and output the grade of the steel.
#include <iostream>
using namespace std;

int main() {
    float hardness, carbonContent, tensileStrength;
    int grade;

    cout << "Enter hardness, carbon content and tensile strength: ";
    cin >> hardness >> carbonContent >> tensileStrength;

    if (hardness > 50 && carbonContent < 0.7 && tensileStrength > 5600)
        grade = 10;
    else if (hardness > 50 && carbonContent < 0.7)
        grade = 9;
    else if (carbonContent < 0.7 && tensileStrength > 5600)
        grade = 8;
    else if (hardness > 50 && tensileStrength > 5600)
        grade = 7;
    else if (hardness > 50 || carbonContent < 0.7 || tensileStrength > 5600)
        grade = 6;
    else
        grade = 5;

    cout << "Steel grade: " << grade << endl;
}
