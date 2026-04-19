/* 5. Write a C++ program to accept table number, customer name, contact number, and details of
ordered items, calculate the total bill, apply discount if applicable, and display the complete bill in a
proper format. */

#include<iostream>
using namespace std;

int main () 
{
    int tableNo;
    string name;
    long contact;

    float price1, price2, price3, total, discount = 0;

    // Input details
    cout<<"Enter Table Number: ";
    cin >> tableNo;

    cout<<"Enter Customer's Name: ";
    cin >> name;

    cout<<"Enter Contact Number: ";
    cin >> contact;

    //item price
    cout<<"Enter price of item 1: ";
    cin >> price1;

    cout<<"Enter price of item 2: ";
    cin >> price2;

    cout<<"Enter price of item 3: ";
    cin >> price3;

    // calculate total 

    total = price1 + price2 + price3;

    if (total > 5000)
    {
        discount = total * 0.10;
    }

    float finalAmount = total - discount;

    //Dispaly bill


    cout<<"----------BILL----------"<<endl;
    cout<<"Table No: "<< tableNo << endl;
    cout<<"Name: "<< name <<endl;
    cout<<"Contact: "<<contact<< endl;

    cout<<"Items Price: "<< endl;
    cout<<"Item 1: " <<price1 << endl;
    cout<<"Item 2: " <<price2 << endl;
    cout<<"Item 3: " <<price3 << endl;

    cout<<"Total: " << total << endl;
    cout<<"Discount: " << discount << endl;
    cout<<"Final Amount: " <<finalAmount << endl;

    return 0;
    
}

/* Output
Enter Table Number: 4
Enter Customer's Name: Surabhi:
Enter Contact Number: 1234567898
Enter price of item 1: 230.56
Enter price of item 2: 456.90
Enter price of item 3: 5674.00
----------BILL----------
Table No: 4
Name: Surabhi
Contact: 1234567891
Items Price:
Item 1: 230.56
Item 2: 456.9
Item 3: 5674.9

Total: 6361.46
Discount: 636.146
Final Amount: 5725.31
*/