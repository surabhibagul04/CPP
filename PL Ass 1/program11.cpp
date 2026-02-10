// Write a program to Print Numbers from 1 to n using class.

#include <iostream>
using namespace std;

class Print {
    public: 
    void show(int num) {
        for (int i= 1; i<=num; i++)
        cout << i <<" ";
    }
};

int main () {

    Print p;
    int num;
    cout<<"Enter number:";
    cin>> num;
    p.show(num);
}