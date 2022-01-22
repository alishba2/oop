#include<iostream>
#include<string>
#include"publishing2.h"

void publishing2 :: getDate(){
    cout<<"Enter Day: "<<endl;
    cin >> day;
    cout<<"Enter Month : "<<endl;
    cin >> month;
    cout<<"Enter year: "<<endl;
    cin>> year;
}

void publishing2 :: putDate(){
    cout<<"Date of Publishing: "<< day << "/"<< month << "/"<< year <<endl;
}