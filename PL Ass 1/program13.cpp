// Write a program using Class to display book details in a library. If a student wants to issue a book, write a condition about availability of a book.

#include <iostream>
using namespace std;

class Book{
    string name;
    int available;

    public: 
    void input() {
        cout << "Enter book name: ";
        cin >> name;
        cout << "Enter availability ( 1= yes, 0= no): ";
        cin >> available;
    }

    void issue() {
        if (available == 1)
        cout << "Book Issued Successfully";
        else 
        cout << "Book Not available";

    }
    };

    int main () {
        Book b;
        b.input();
        b.issue();
        }
