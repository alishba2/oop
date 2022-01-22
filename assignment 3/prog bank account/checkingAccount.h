// DERIVED CLASS

#pragma once 

#include<string>
#include"bankAccount.h"
#include<iostream>
using namespace std;

class checkingAccount:public bankAccount{

    // DATA MEMBERS

    int noOfChecks;

    // MEMBER FUNCTIONS

    public:

    // PARAMETERIZED CONSTRUCTOR
    checkingAccount(int a, string n , int b,int c);

    void show();
    void withdraw();


};