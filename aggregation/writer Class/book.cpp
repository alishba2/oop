#include<iostream>
#include<string>
#include"book.h"
using namespace std;

void book :: get(){
    cout<<"Enter title of book:";
    cin >>title;
    cout<<"Enter price of book: ";
    cin >> price;
}

void book :: show(){
    cout<<"Title of book  :"<<title<<endl<<"Price of book  :"<<price<<endl;
}