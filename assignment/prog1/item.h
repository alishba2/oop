
#pragma once
#include<string>
using namespace std;

class item{
    string Name;
    int productId;
    float price;

    public:
    virtual void get();
    virtual void show();

    int Tell_id(){
        return productId;
    }
    float Tell_price(){
        return price;
    }

};