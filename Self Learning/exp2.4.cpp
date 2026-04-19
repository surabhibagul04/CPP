/* 4. Write a C++ program to display a formatted bill that includes item names, their respective prices,
and the total amount in a structured manner. */

#include<iostream>
using namespace std;

int main ()
{
    //-
    string item1 = "Pizza";
    string item2 = "Burger";
    string item3 = "Cold Drink";

    float price1 = 120.50;
    float price2 = 250.75;
    float price3 = 60.56;

    float total = price1 + price2 + price3;

    cout<<"----------BILL----------"<<endl;
    cout<<"Pizza: "<< price1 <<endl;
    cout<<"Burger: "<< price2 <<endl;
    cout<<"Cold Drink: "<< price3 <<endl;
    cout<<"------------------------"<<endl;

    cout<<"Total: "<< total <<endl;

    return 0;

}

/*Output
----------BILL----------
Pizza: 120.5
Burger: 250.75
Cold Drink: 60.56
------------------------
Total: 431.81

*/