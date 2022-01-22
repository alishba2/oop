#include<iostream>
#include "book.h"
using namespace std;


void book :: Get(){
    cout<<"Enter Title of Book:"<<endl;
    cin >> Title;
    cout<<"Enter Price of Book: "<<endl;
    cin >> Price;
    cout<<"Enter Quantity of Books: "<<endl;
    cin >> Quantity;

}
void book :: Show(){
    cout<<"Title: "<<Title<<endl<<"Prize: "<<Price<<endl<<"Quantity: "<<Quantity<<endl;
}
float book :: TellPrice(){
    return Price;
}