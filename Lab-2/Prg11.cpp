// Write program to input 5 subject’s marks of student input from the keyboard and find
// out the percentage, if each subject is of 100 marks then print division of the student.
// a. If percentage >= 60 then first division
// b. If percentage < 60 and >=50 then second division
// c. If percentage < 50 and >=30 then third division
// d. Otherwise fail
#include <iostream>
using namespace std;

int main() {
    int marks[5], totalMarks = 0;

    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        totalMarks += marks[i];
    }

    float percentage = (totalMarks / 500.0) * 100;

    if (percentage >= 60)
        cout << "Percentage: " << percentage << "% - First Division" << endl;
    else if (percentage >= 50)
        cout << "Percentage: " << percentage << "% - Second Division" << endl;
    else if (percentage >= 30)
        cout << "Percentage: " << percentage << "% - Third Division" << endl;
    else
        cout << "Percentage: " << percentage << "% - Fail" << endl;
}
