#include<iostream>
#include"food.h"
#include<string>
using namespace std;


// GET FUNCITON DEFINATION

void food :: Get()
{
    cout<<"Enter Name: "<<endl;
    cin>>Name;
    cout<<"Enter Price : "<<endl;
    cin>>Price;
    cout<<"Enter Quantity: "<<endl;
    cin>> Quantity;
}

void food :: show(){
   
    cout<<"NAME : "<< Name<<endl << "Price: "<<Price<<endl<<"Quantity Availabel: "<<Quantity<<endl;
}

int food :: updateQuantity(int Q){
    if(Q<=Quantity){
        Quantity = Quantity - Q;
        return Q*Price;
    }
    else {
        cout<<"Not Available:"<<endl;
        return 0;
    }
}