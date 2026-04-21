/* Write a C++ program with base class ‘Bank‘ having virtual function ‘interest()‘.
 Derive ‘SBI‘ and ‘HDFC‘. Override ‘interest()‘. Use base class pointer to call both.*/

 #include <iostream>
 using namespace std;

 class Bank{
    public:
    virtual void interest(){
        cout<<"Interest rate of bank:"<<endl;
    }
 };

 class SBI: public Bank{
    public: 
    void interest(){
        cout <<"Interest rate of SBI: 7% "<<endl;
    }
 };

 class HDFC: public Bank{
    public: 
    void interest(){
        cout <<"Interest rate of HDFC: 6% "<<endl;
    }
 };

 int main () {
    Bank*ptr;
    SBI s;
    HDFC h;

    ptr = &s;
    ptr ->interest();

      ptr = &h;
    ptr ->interest();

    return 0;

    
 }

 /*Interest rate of SBI: 7% 
Interest rate of HDFC: 6%*/