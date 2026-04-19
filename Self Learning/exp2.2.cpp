/* 2. Write a C++ program to accept the prices of three food items from the user and calculate the total
amount of the order.*/ 

#include<iostream>
using namespace std;

int main () 
{
    float item1, item2, item3, total;

    //Acccpt the price of three food items

    cout<<"Enter price of item 1: ";
    cin>>item1;

    cout<<"Enter price of item 2 : ";
    cin>>item2;

    cout<<"Enter price of item 3: ";
    cin>>item3;

    //calculate the total amount

    total = item1+ item2+ item3;

    cout<<"Total Amount: "<<total<<endl;


    return 0;

}

/*Output
Enter price of item 1: 34
Enter price of item 2: 56
Enter price of item 3: 78
Total Amount: 168
*/