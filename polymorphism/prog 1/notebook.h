# pragma once

#include<string>
using namespace std;

class notebook{
    float price;
    int id;
    string name;

    public :
    notebook();
    notebook(float p , int i , string n);
    virtual void get();
    virtual void show();
    float tellPrice(){
        return price;
    }
    virtual bool isoversized(){
        return true;
    };

};