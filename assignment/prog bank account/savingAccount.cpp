#include"savingAccount.h"
#include<iostream>
#include<string>
using namespace std;

savingAccount::savingAccount(int a, string n , int b,float i): bankAccount(a,n,b){
    interestRate = i;
}

void savingAccount ::show(){
    bankAccount :: show();
    cout<<"Interest Rate:"<<interestRate<<endl;
}

void savingAccount ::withdraw(){
    int amt;
    cout<<"Enter amount: "<<endl;
    cin >> amt;
    if(amt > 50000){
        cout<<"you cannot withdraw more than 50000"<<endl;

    }
    else{
        cout<<"Total Balance is:"<<tellBalance(amt);
    }
 

}