/* Write a C++ program with base class ‘Student‘ having virtual function ‘display()‘.
 Derive ‘UG‘ and ‘PG‘. Override ‘display()‘. Use base class pointer to call both.*/

 #include <iostream>
 using namespace std;

 class Student {
    public:
    virtual void display(){
        cout<<"Result of Students: "<<endl;
    }
 };

 class UG: public Student{
    public: 
    void display(){
        cout <<"Result of Student in UG: 8CGPA "<<endl;
    }
 };

 class PG: public Student {
    public:
    void display(){
        cout<<"Result of Student in PG: 9CGPA "<<endl;
    }
 };

 int main (){
    Student * ptr;
    UG u;
    PG p;

    ptr = &u;
    ptr-> display();

    ptr = &p;
    ptr -> display();

    return 0;
 }

 /*Result of Student in UG: 8CGPA 
Result of student in PG: 9CGPA */