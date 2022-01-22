
#include<iostream>
#include<string>
using namespace std;
#include"bank.h"

int main(){
    bank b1;
    b1.ReadInfo();
    b1.Display();

    cout<<"---------------MENUE-------------------"<<endl;

    int opt;
    int acc_no;
    
    cout<<"ENTER 1 TO FIND BY ACC NO \t ENTER 2 TO DEPOSIT AMOUNT \t ENTER 3 TO WITHDRAW AMOUNT \t ENTER 4 FOR BALANCE INQUIRY";
    cin>>opt;
    if(opt==1){
        cout<<"Enter YOUR ACCOUNT NUMBER: "<<endl;
        cin >> acc_no;

        b1.Find(acc_no);
        
        

    }
    else if(opt == 2){
        b1.Deposit();
    
    }
    else if(opt == 3){
        b1.withdraw();
    }
    
}
