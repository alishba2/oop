#include<iostream>
using namespace std;

class shape{

    int area;
    public :
    shape(){
        area = 0;
    }
    void display();

    virtual void calculateArea();

};