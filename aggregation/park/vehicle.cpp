#include<iostream>
#include<string>
#include"vehicle.h"

void vehicle :: read(){
    cout<<"Enter regNo: "<<endl;
    cin >> regNo;
    cout<<"Enter Type of vehicle B for bus C for car b for bike: "<<endl;
    cin >> Type;
    cout<<"Enter drivers name :"<<endl;
    cin >> name;
};
void vehicle :: display(){
    cout<<"Reg no: "<<regNo<<endl<<"Type: "<<Type<<endl<<"name"<<name<<endl;
}