/* Write a C++ program to calculate the total bill amount and apply a discount of 10% if the total
amount exceeds ₹1000, then display the final payable amount.*/

#include<iostream>
using namespace std;

int main () 
{
    float total, discount = 0, finalAmount;

    //Input Total bill amount

  cout<<"Enter total bill amount: ";
  cin >> total;

  if (total > 1000)
  {
    discount = total * 0.10;
  }

  //Final Amount
  finalAmount = total - discount;

  cout<<"Total amount = " <<total <<endl;
  cout<< "Discount = " << discount <<endl;
  cout<<"Final payable amount = "<<finalAmount << endl;

  return 0;
}

/*Output:
Enter total bill amount: 3456
Toal amount = 3456
Discount = 345.6
Final payable amount = 3110.4 
*/