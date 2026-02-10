// Write a C++ program using Class to check if a number is prime or not.

#include<iostream>
using namespace std;
class Prime {
    public: 
    int number;
    void input () {
        cout<< "Enter number: ";
        cin >> number;
    }

    void check () {
        int flag = 0;
        for (int i=2; i<number; i++)
        if ( number % i == 0) flag =1;

        if (flag == 0 && number > 1)
        cout << "Prime";
        else 
        cout<<"Not Prime";
    }


};

int main () {
    Prime p;
    p.input();
    p.check();
}