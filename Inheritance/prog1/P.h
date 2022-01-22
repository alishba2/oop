#pragma once
#include<iostream>
#include<string>
#include"employee.h"
using namespace std;

// DERIVED CLASS

class P : public employee {

    int no_of_projects;

    public:
    void get();
    void display();
};