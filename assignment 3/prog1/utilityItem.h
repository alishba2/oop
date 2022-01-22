// DERIVED CLASS

#pragma once

#include<string>
#include"item.h"
using namespace std;

class utilityItem : public item{

    int discount;
    public:
    void get();
    void show();


};