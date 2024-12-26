// 1.  Basic Class with Attributes:
// Define a class Person with attributes:
// •	name (string)
// •	age (int)
// Create an object of the class, set the values for the attributes manually, and print the details.
#include <iostream>
using namespace std;

class Person {
    string name; 
    int age;          

public:
    void set_attribute(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void display_attributes() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person; 
    person.set_attribute("Himalaya", 32); 
    person.display_attributes();
}
