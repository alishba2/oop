#include "foodItem.h"
#include<iostream>
#include<string>
using namespace std;

void foodItem ::get(){
    item::get();
    cout<<"Enter day date and month of expiry: "<<endl;
    cin>> day;
    cin>> date;
    cin >> month;
}
void foodItem ::show(){
    item :: show();
    cout<<"DATE OF EXPIRY : "<<day <<"/"<<date<<"/"<<month<<endl;
}