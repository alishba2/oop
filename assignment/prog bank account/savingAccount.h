#pragma once 

#include"bankAccount.h"
#include<iostream>
#include<string>
using namespace std;

class savingAccount : public bankAccount {

    float interestRate;

    public:
    
    savingAccount(int a, string n , int b,float i);
    void show();
    void withdraw();
  

};