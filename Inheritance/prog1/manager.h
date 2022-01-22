#pragma once
#include<iostream>
#include<string>
#include"employee.h"
using namespace std;

// DERIVED CLASS

class manager : public employee{
    int no_of_tasks;

    public:
    
    void get();
    void display();
    
};