#include<iostream>
#include<string>
#include"person.h"
using namespace std;

// Function Definations

void person :: GET(){
    cout<<"Enter name of person :";
    cin >> NAME;
    cout<<"Enter Id card of person: "<<endl;
    cin >> ID_CARD;
    cout<< "Enter phone number of person ; "<<endl;
    cin >> PHONE_NUMBER;
}
void person :: SHOW(){
    cout<< "Name : "<<NAME <<endl << "Id card : "<< ID_CARD<<endl<<"Contact number: "<<PHONE_NUMBER<<endl;
}