#include"bankAccount.h"
#include<iostream>
using namespace std;

// FUNCTION DEFINATIONS

bankAccount::bankAccount(int a, string n , int b){

    acctNumber = a;
    acctHolderName = n;
    balance = b;

}

void bankAccount ::show(){
    cout<<"ACCOUNT NUMBER: "<<acctNumber<<endl;
    cout<<"ACCOUNT HOLDER NAME: "<<acctHolderName <<endl;
    cout<<"BALANCE :"<<balance <<endl;

}

int bankAccount ::tell_balance(int amt){

    balance = amt + balance;
    return balance;
    

};

void bankAccount ::deposit(){
    int no , amt;
  
        cout<<"Enter amount you want to deposit: "<<endl;
        cin >> amt;
        cout<<"Total balance in your account is : "<<tell_balance(amt);
    
}
void bankAccount::get(){
    cout<<"Enter Name :"<<endl;
    cin >> acctHolderName;
    cout<<"Enter id:"<<endl;
    cin >> acctNumber;
    cout<<"Enter balance: "<<endl;
    cin >> balance;
}