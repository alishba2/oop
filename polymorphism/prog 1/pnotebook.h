# pragma once
#include<iostream>
#include"notebook.h"

class pnotebook : public notebook
{
private:

    int noOfPages;
public:
    pnotebook();
    pnotebook(int P,float p , int i , string n);
    void get();
    void show();   
    bool isoversized(); 
};


