// 3. Simple Object Manipulation:
// Create a class Car with attributes:
// •	brand (string)
// •	model (string)
// •	price (float)
// Create two objects of the Car class and manually 
// set different values for each object's attributes. Print the details of both cars.
#include<iostream>
using namespace std;

class Car{
    string brand;
    string model;
    long price;

    public:
    void get_param(string brand,string model,float price){
        this->brand=brand;
        this->model=model;
        this->price=price;
    }

    void show_param(){
        cout << "Brand name :" << brand << endl;
        cout << "Model name :" << model << endl;
        cout << "Price :" << price << endl;
    }

};
int main(){
    Car car;
    car.get_param("BMW","X5",10000000);
    car.show_param();
    cout << "Thanks for visiting:"<< endl;
}