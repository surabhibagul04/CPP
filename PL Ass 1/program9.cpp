// Write a program using Class to check if a year is a leap year or not.

#include<iostream>
using namespace std;

class Year {
    int y;
    public:
    void input(){
        cin >> y;
    }
    void check() {
        if((y% 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        cout<< "Leap Year";
        else
        cout <<"Not Leap Year";
    }

};

int main () {
    Year y;
    cout<<"Enter Year: ";
    y.input();
    y.check();
}