#include"checkingAccount.h"
#include<iostream>
#include<string>
using namespace std;


checkingAccount ::checkingAccount(int a, string n , int b,int c) : bankAccount(a,n,b){

    c = noOfChecks;

}

void checkingAccount ::show(){

    bankAccount ::show();
    cout<<"no of checks allowed per month :"<<noOfChecks<<endl;

}

void checkingAccount::withdraw(){
     int amt;
    cout<<"Enter amount : "<<endl;
    cin >> amt;
    if((tellBalance(amt) < 5000)){
        cout<<"you cannot withdraw this amount"<<endl;
    }
    else{
        cout<<"Total Balance:"<<tellBalance(amt)<<endl;
    }
 
    
}