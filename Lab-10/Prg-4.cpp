// 4. Library Management
// Objective:
// Create a Book class with the following:

// Non-static members:
// title (string)
// author (string)
// bookID (int)
// Static member:
// totalBooks (to track the total number of books in the library)
// Constructors:
// Parameterized constructor to initialize all the details.
// Methods:
// displayBookDetails() to display the book’s information.
// Task:
// Write a program to:

// Create an array of Book objects.
// Display their details.
// Print the total number of books in the library.

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int bookID;

public:
    // Static member to track the total number of books
    static int totalBooks;

    // Parameterized constructor
    Book(string t, string a, int id) : title(t), author(a), bookID(id) {
        totalBooks++;
    }

    // Method to display book details
    void displayBookDetails() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Book ID: " << bookID << endl;
    }

    // Static method to get the total number of books
    static int getTotalBooks() {
        return totalBooks;
    }
};

// Initialize the static member
int Book::totalBooks = 0;

int main() {
    // Create an array of Book objects
    Book books[] = {
        Book("The Great Gatsby", "F. Scott Fitzgerald", 1),
        Book("1984", "George Orwell", 2),
        Book("To Kill a Mockingbird", "Harper Lee", 3)
    };

    // Display details of each book
    for (const auto& book : books) {
        book.displayBookDetails();
        cout << endl;
    }

    // Display the total number of books
    cout << "Total number of books in the library: " << Book::getTotalBooks() << endl;
}
