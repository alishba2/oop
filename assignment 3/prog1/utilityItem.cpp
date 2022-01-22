#include "utilityItem.h"
#include<iostream>
#include<string>
using namespace std;

void utilityItem ::get(){
    item::get();
    cout <<"Enter Discount on the item: "<<endl;
    cin>> discount;

}

void utilityItem ::show(){
    item::show();
    cout<<"DISCOUNT ON AN ITEM IS: "<< discount<<endl;
}