#pragma once
#include<iostream>
#include<string>
#include"publishing2.h"
#include"sale.h"
using namespace std;

class tape : public publishing2 , sale{
    float playing_time;

    public:
    void getData();
    void putData();
    
};