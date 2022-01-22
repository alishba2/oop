#include<iostream>
#include<string>
#include"student.h"
using namespace std;

void student :: get(){
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter student ID: ";
    cin>>id;
    cout<<"Enter Program enrolled: ";
    cin>>program;
    
}
void student :: show(){
    cout<<"NAME :"<<name<<endl<<"ID: "<<id<<endl<<"PROGRAM: "<<program<<endl;
}