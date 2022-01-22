#pragma once
#include<iostream>
#include<string>
#include"publishing.h"

class publishing2 : public publishing{
    int day , month , year;
    public :
    void getDate();
    void putDate();

};