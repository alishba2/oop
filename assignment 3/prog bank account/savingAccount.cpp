#include"savingAccount.h"
#include<iostream>
#include<string>
using namespace std;

savingAccount::savingAccount(int a, string n , int b,float i): bankAccount(a,n,b){
    interestRate = i;
}

void savingAccount ::show(){
    bankAccount :: show();
    cout<<"INTEREST RATE :"<<interestRate<<endl;
}

void savingAccount ::withdraw(){
    int amt;
    cout<<"ENTER YOUR AMOUNT (WITHDRAW): "<<endl;
    cin >> amt;
    if(amt > 50000){
        cout<<"SORRY! YOU CANNOT WITHDRAW AMOUNT MORE THAN 50000"<<endl;

    }
    else{
        cout<<"Total Balance is:"<<tellBalance(amt)<<endl;
    }
 

}