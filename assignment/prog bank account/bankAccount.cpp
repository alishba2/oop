#include"bankAccount.h"
#include<iostream>
using namespace std;

bankAccount::bankAccount(int a, string n , int b){

    acctNumber = a;
    acctHolderName = n;
    balance = b;

}

void bankAccount ::show(){
    cout<<"Account number: "<<acctNumber<<endl;
    cout<<"Account Holder Name: "<<acctHolderName <<endl;
    cout<<"Balance:"<<balance <<endl;

}

int bankAccount ::tell_balance(int amt){

    balance = amt + balance;
    return balance;
    

};

void bankAccount ::deposit(){
    int no , amt;
  
        cout<<"Enter amount to deposit: "<<endl;
        cin >> amt;
        cout<<"Total balance : "<<tell_balance(amt);
        

}
void bankAccount::get(){
    cout<<"Enter Name :"<<endl;
    cin >> acctHolderName;
    cout<<"Enter id:"<<endl;
    cin >> acctNumber;
    cout<<"Enter balance: "<<endl;
    cin >> balance;
}