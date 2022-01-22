#include<iostream>
#include<string>
#include"item.h"
using namespace std;


void item ::get(){
    cout<<"Enter name of Item: "<<endl;
    cin>>name;
    cout<<"Enter product id: "<<endl;
    cin>>productId;
    cout<<"Enter price of product: "<<endl;
    cin>>price;

}

void item ::show(){
    cout<< "NAME OF ITEM: "<<name<<endl;
    cout<<"PRODUCT ID OF ITEM: "<<productId<<endl;
    cout << "PRICE OF ITEM: "<<price<<endl;
}