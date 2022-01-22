#include<iostream>
#include<string>
#include"item.h"
using namespace std;


void item ::get(){
    cout<<"Enter name : "<<endl;
    cin>>Name;
    cout<<"Enter  id: "<<endl;
    cin>>productId;
    cout<<"Enter price : "<<endl;
    cin>>price;

}

void item ::show(){
    cout<< "NAME : "<<Name<<endl;
    cout<<"PRODUCT ID : "<<productId<<endl;
    cout << "PRICE : "<<price<<endl;
}