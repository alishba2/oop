#include<iostream>
#include<string>
#include"publishing.h"
using namespace std;

void publishing :: getData(){
    cout<<"Enter Title : "<<endl;
    cin >> title;

    cout <<"Enter Price : "<<endl;
    cin >> price;
}

void publishing :: putData(){
    cout<<"Title : "<< title<<endl<<"Price : "<<price<<endl; 
}