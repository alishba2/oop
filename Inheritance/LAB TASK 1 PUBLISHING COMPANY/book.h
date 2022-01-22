#pragma once

#include<iostream>
#include<string>
#include"publishing2.h"
#include"sale.h"
using namespace std;


class book : public publishing2 , sale{
    int pageCount;
    public:
    void getData();
    void putData();
};