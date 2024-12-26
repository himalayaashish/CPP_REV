// 5. Calculate Average:
// Create a class Student with attributes:
// •	name (string)
// •	marks1 (float)
// •	marks2 (float)
// Write a member function calculateAverage() to find and return the average of the two marks. Use an object to test the function.
#include <iostream>
using namespace std;

class Student {
    string name;
    float marks1;
    float marks2;

public:

    void set_details(const string& student_name, float m1, float m2) {
        name = student_name;
        marks1 = m1;
        marks2 = m2;
    }

    float calculate_average() const {
        return (marks1 + marks2) / 2.0f;
    }

    void display_details() const {
        cout << "Name: " << name
                  << ", Marks1: " << marks1
                  << ", Marks2: " << marks2
                  << ", Average: " << calculate_average() << endl;
    }
};

int main() {
    int total_students;
    cout << "Enter the total number of students in the class: ";
    cin >> total_students;

    vector<Student> students(total_students); 
    for (int i = 0; i < total_students; ++i) {
        string name;
        float marks1, marks2;

        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Marks1: ";
        cin >> marks1;
        cout << "Marks2: ";
        cin >> marks2;

        students[i].set_details(name, marks1, marks2);
    }

    cout << "\nClass Results:\n";
    for (int i = 0; i < total_students; ++i) {
        students[i].display_details(); 
    }
}
