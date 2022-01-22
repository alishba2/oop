#include<iostream>
#include<string>
using namespace std;
#include"employee.h"


// function defination get()


void employee::get(){
    cout<<"Enter Your Name : "<<endl;
    cin >> name;

    cout<<"Enter Your Id : "<<endl;
    cin >> id;
}

// function defination display()

void employee :: display(){
    cout<< "Name : "<< name <<endl<< "ID: "<<id<<endl;
}