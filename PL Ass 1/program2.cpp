//Write a program to find a prime number.

# include <iostream>
using namespace std;

int main () {
    int num, i;
    cout <<" Enter number: ";
    cin >> num;

    if ( num <= 1) {
        cout << "Not Prime";
        return 0;
    }

    for ( i=2; i < num; i++) {
        if (num % i == 0) {
            cout << "Not prime";
            return 0; 
        }
    }

    cout <<"Prime Number";
    return 0;
}
