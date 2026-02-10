// An array can be declared inside a class to store multiple values.

#include<iostream>
using namespace std;

class Marks{
    public:
    int scores[3]; //Array inside class

    void showMarks() {
        for (int i=0; i<3; i++){
            cout<<"Score"<<i+1<<"."<<scores[i]<<endl;
    
        }
    }
};

int main () {
    Marks m;
    m.scores[0]= 85;
    m.scores[1]=90;
    m.scores[2]=95;
    m.showMarks();
    return 0;
    
}