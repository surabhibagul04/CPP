// Write a C++ program to Swap two numbers using class.

#include <iostream>
using namespace std;

class Swap {
    int num1, num2;
    public: 
    void input() {
        cin >> num1 >> num2;
    }
    void swapNum() {
        int temp = num1;
        num1= num2;
        num2= temp;

    }
    void display() {
        cout << "After Swap: " << num1 << "   " << num2;

    }

};

int main () {
    Swap s;
    cout << "Enter two numbers: ";
    s.input();
    s.swapNum();
    s.display();
}