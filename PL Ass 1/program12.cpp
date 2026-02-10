// Write program to calculate medical bill of the person using constructor.

#include<iostream>
using namespace std;

class Medical {
    float bill;
    public: 
    Medical(float b) {
        bill = b;
    }
    void display() {
        cout << "Medical Bill = " << bill;
        }
};

int main () {
    float b;
    cout << "Enter bill amount: ";
    cin >> b;
    Medical m(b);
    m. display();
}