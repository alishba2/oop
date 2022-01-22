#pragma once

#include<string>
using namespace std;

class publication{

    string title;
    int price;

    public:
    publication(string t , int p);
    virtual void show();
    virtual bool Isoversized(){
        return true;
    };
    
    string returntitle(){
        return title;
    }


};