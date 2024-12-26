// 2.  Member Function to Set and Get Values:
// Define a class Rectangle with attributes:
// •	length (float)
// •	width (float)
// Write member functions setValues() to set the values of the attributes 
// and getArea() to calculate and return the area. 
// Use these functions with an object to find the area of the rectangle.
#include<iostream>
using namespace std;

class Rectangle{
    int l;
    int b;

    public:
    void set_param(int l, int b){
        this->l=l;
        this->b=b;
    }

    int area(){
        return l * b;
    }

};
int main(){
    int area;
    Rectangle r;
    r.set_param(10,5);
    area = r.area();
    cout << "Area:" << area << endl;
}