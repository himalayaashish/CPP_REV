// Write a C program to input marks of five subjects Physics, Chemistry, Biology,
// Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F
#include <iostream>
using namespace std;

int main() {
    float marks[5], total = 0, percentage;
    char grade;

    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / 500) * 100;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    cout << "Grade: " << grade << endl;
}
