// DERIVED CLASS

#pragma once

#include"item.h"

class foodItem : public item{

    int day , date, month;
    public:
    void get();
    void show();
};