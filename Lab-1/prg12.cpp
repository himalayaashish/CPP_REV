// Write a program to input length and breadth of the rectangle and find out the area and perimeter
// of rectangle.
#include <iostream>
using namespace std;
int main(){
    float length, breath;
    cout << "Enter the value of length :- ";
    cin >> length;
    cout << "Enter the value of breath :- ";
    cin >> breath;
    cout << "The perimeter of rectangle =  " << 2 *(length + breath) << "\n";
    cout << "The area of rectangle =  " << length * breath<< "\n";

}