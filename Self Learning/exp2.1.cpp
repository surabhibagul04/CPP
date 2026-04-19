/* 1. Write a C++ program to accept the customer’s name and mobile number as input and display the
entered details in a proper format. */

#include<iostream>
using namespace std;

int main ()
{
    // Accept customer's name and mobile number
    
    char name[50];
    char phoneNo[11];   // fixed size

    cout<<"Enter Customer's name: ";
    cin>>name;

    cout<<"Enter Customer's phone number: ";
    cin>>phoneNo;

    // Display the information taken

    cout<<"Customer's Name: "<<name<<endl;
    cout<<"Customer's phone number: "<<phoneNo<<endl;

    return 0; 
}

/*Output
Enter Customer's name: Surabhi
Enter Customer's phone number: 12345678910
Customer's Name: Surabhi
Customer's phone number: 12345678910
*/
