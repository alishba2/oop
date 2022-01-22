#include"checkingAccount.h"
#include<iostream>
#include<string>
using namespace std;


checkingAccount ::checkingAccount(int a, string n , int b,int c) : bankAccount(a,n,b){

    c = noOfChecks;

}

void checkingAccount ::show(){

    bankAccount ::show();
    cout<<"NO OF CHECKS ALLOWED PER MONTH :"<<noOfChecks<<endl;

}

void checkingAccount::withdraw(){
     int amt;
    cout<<"Enter amoount you want to withdraw: "<<endl;
    cin >> amt;
    if((tellBalance(amt) < 5000)){
        cout<<"UNSUFFICIENT BALANCE"<<endl;
    }
    else{
        cout<<"Total Balance is:"<<tellBalance(amt)<<endl;
    }
 
    
}