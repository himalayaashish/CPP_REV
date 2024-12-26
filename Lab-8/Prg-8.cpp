// 8. Object Input and Output:
// Create a class Book with attributes:
// •	title (string)
// •	author (string)
// •	price (float)
// Write member functions to take input for these attributes and display the details. Create an object and test it.

#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    float price;

public:
    void input_details() {
        cout << "Enter title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter price: ";
        cin >> price;
    }

    void display_details() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book book;
    book.input_details();
    cout << "\nBook Details:\n";
    book.display_details();
}
