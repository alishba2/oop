// BASE CLASS

#pragma once

#include<string>

#include<iostream>
using namespace std;


class bankAccount{
    int acctNumber;
    string acctHolderName;
    int balance;
    public:

    bankAccount(int a, string n , int b);
    void show();
    void get();
    void deposit();

    int tell_balance(int amt);
 
    int tellBalance(int amt){
        balance = balance - amt;
        return balance;
    };
    void total_balance(){
       cout<<"Total Balance :" <<balance<<endl;
    }

    
    virtual void withdraw()=0;

    int tellAccountNo(){
        return acctNumber;
    }

    int id(){
        return acctNumber;
    }
    string name(){
        return acctHolderName;
    }
    int bal(){
        return balance;
    }
   

};