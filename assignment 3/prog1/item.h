// BASE CLASS
#pragma once
#include<string>
using namespace std;

class item{

    string name;
    int productId;
    float price;

    public:
    virtual void get();
    virtual void show();
    int tellId(){
        return productId;
    }
    float tellPrice(){
        return price;
    }

};