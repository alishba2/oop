#pragma once

#include<iostream>
#include<string>
#include"publishing.h"
using namespace std;

class disk : public publishing{

    char DiskType;
    public:
    void getData();
    void putData();


};