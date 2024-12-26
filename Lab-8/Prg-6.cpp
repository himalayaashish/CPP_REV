// 6. Simple Comparison:
// Define a class Box with attributes:
// •	length (float)
// •	width (float)
// •	height (float)
// Write a member function isLarger(Box otherBox) that compares the volume of two boxes and returns true if the current box is larger. Create two objects and test the function.
#include <iostream>
using namespace std;

class Box {
    float length;
    float width;
    float height;

public:
    void set_dimensions(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    float calculate_volume() const {
        return length * width * height;
    }

    bool isLarger(const Box& otherBox) const {
        return this->calculate_volume() > otherBox.calculate_volume();
    }
};

int main() {
    Box box1, box2;

    box1.set_dimensions(3.0, 4.0, 5.0);
    box2.set_dimensions(2.0, 3.0, 6.0);

    if (box1.isLarger(box2)) {
        cout << "Box1 is larger than Box2" << endl;
    } else {
        cout << "Box2 is larger than or equal to Box1" << endl;
    }
}
