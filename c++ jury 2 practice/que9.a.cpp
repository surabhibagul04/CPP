/*Write a C++ program with base class ‘Account‘ having virtual function ‘balance()‘.
 Derive ‘Saving‘ and ‘Current‘. Override ‘balance()‘. Use base class pointer to call both.*/

 #include <iostream>
 using namespace std;

 class Account {
    public:
    virtual void balance() {
        cout <<"Balance in account: ";
    }
 };

 class Saving : public Account {
    public:
    void balance() {
        cout << "Balance is saving account= 30,000" << endl;
    }
 };

 class Current : public Account {
    public: 
    void balance() {
        cout << "Balance in current account= 60,000" << endl;
    }
 };

 int main () {
    Account *ptr;
    Saving s;
    Current c;

    ptr = &s;
    ptr -> balance();

    ptr = &c;
    ptr -> balance();

    return 0;
 }

 /*Balance is saving account= 30,000
Balance in current account= 60,000*/