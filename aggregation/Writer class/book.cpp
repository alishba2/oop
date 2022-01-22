#include"book.h"
#include<iostream>

void book :: Get(){
    cout<<"Enter Title of book: "<<endl;
    cin<<title;
    cout<<"Enter Price of book: "<<endl;
    cin>>price;
}

void book :: Show(){
    cout<<Title << ":"<<title<<Price <<":"<<price;
}