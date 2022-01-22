# pragma once

#include<iostream>
#include<string>
#include"notebook.h"
using namespace std;

class Enotebook : public notebook {
    float size;
    public:
    Enotebook();
    Enotebook(float S ,float p , int i , string n);
    void get();
    void show();
    bool isoversized();

};