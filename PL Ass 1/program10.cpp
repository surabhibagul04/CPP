//Write a program to check if the number is palindrome or not using the inline member Function.

#include<iostream>
using namespace std;

class Palindrome {
    public: 
    inline void check(int num){
        int r, rev= 0, temp = num;
        while(num>0) {
            r = num % 10;
            rev = rev * 10 + r;
            num /= 10;

        }
        if (temp == rev )
        cout << "Palindrome";
        else 
        cout<<"Not Palindrome";
    }
};

int main () {
    Palindrome p;
    int num;
    cout<<"Enter number:  ";
    cin >> num;
    p.check(num); 
}