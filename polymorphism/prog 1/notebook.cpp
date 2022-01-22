#include<iostream>
#include<string>
#include"notebook.h"
using namespace std;

notebook ::notebook(){
  price = 30;
  id = 1;
  name = "";  
}

notebook ::notebook(float p,int i,string n ){

    p = price;
    i = id;
    n = name;

}
void notebook :: get(){
    cout<<"Enter price: "<<endl;
    cin >> price;
    cout<<"Enter Id : "<<endl;
    cin>> id;
    cout<<"Enter name: "<<endl;
    cin>> name; 
}
void notebook :: show(){
    cout<<"Price: "<<price<<endl<<"ID: "<< id<<endl<< "Name: "<<name<<endl;
}
