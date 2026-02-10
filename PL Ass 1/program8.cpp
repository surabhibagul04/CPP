// Write a C++ program to calculate the electricity bill . And display the final bill with a 2% discount using member function.

#include <iostream>
using namespace std;

class Bill {
    float unit, amount;
    public: 
    void input() {
        cout<< "Enter units: ";
        cin >> unit;
    }
    void calculate() {
        amount = unit * 5;
        amount = amount - (amount * 0.02);
    }
    void display () {
        cout << "Final Bill= "<< amount;
        }
};

int main () {
    Bill b;
    b.input();
    b.calculate();
    b.display();
    
    
}