// Create a class Book consist of following properties and methods
// a. Properties : it hold the information of book
// i. name
// ii. page
// iii. price
// b. getdata() method that take name, page and price and store into the properties of object
// c. display() method print the properties of object.
#include <iostream>
using namespace std;


class Book {
    string name;
    int page;
    float price;

public:
    void getdata(string n, int p, float pr) {
        name = n;
        page = p;
        price = pr;
    }

    void display() {
        cout << "Book Name: " << name << ", Pages: " << page << ", Price: " << price << endl;
    }
};

int main(){
    Book book;
    book.getdata("C++ Programming", 500, 350.75);
    book.display();
}