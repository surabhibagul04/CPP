//Inheritance
/*Student Information using inhertance*/

#include<iostream>
#include<string>
using namespace std;

class Student
{
    protected:
    int rollNo;
    string name;

    public:
    void getStudentInfo()
    {
        cout<<"Enter Roll Number:";
        cin>>rollNo;
        cin.ignore();
        cout<<"Enter Name";
        getline(cin, name);

    }
};

class Marks: public Student
{
    private:
    float marks[5];
    float total;

    public:
    void getMarks()
    {
        total = 0;
        for (int i= 0; i<5; i++)
        {
            cout<<"Enter marks of subject"<<i+1<<":";
            cin>>marks[i];
            total+=marks[i];
        }
    }
    void display()
    {
        cout<<"-----Student Information-----"<<endl;
        cout<<"Roll Number: "<<rollNo<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks:";
        for(int i=0; i<5; i++)
        {
            cout<<marks[i]<<"";
        }

        cout<<"Total Marks:"<<total<<endl;
        cout<<"Percentage:"<<(total/5)<<"%"<<endl;
    }

};

int main()
{
    Marks student;
    student.getStudentInfo();
    student.getMarks();
    student.display();
    return 0;

}