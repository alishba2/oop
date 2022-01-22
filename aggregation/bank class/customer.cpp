#include"customer.h"

//  GET SHOW DEFINATION
void customer :: Get(){
    cout<<"Enter Your Account Number: "<<endl;
    cin >> account_no;
    cout<<"Enter Your Name: "<<endl;
    cin >> Name;
    cout<<"Enter Your Balance: "<<endl;
    cin>>Balance;
}

// SHOW FUNCTION DEFINATION

void customer :: Show(){
    cout<<"Account_No: "<<account_no<<endl<<"Name: "<<Name<<endl<<"Balance: "<<Balance<<endl;
}

int customer :: Tell_balance(int amt){
    Balance += amt;
    cout<<"Your amount is now"<<Balance;
}
int customer :: w_draw(int n){
    if(n>Balance){
        cout<<"unsufficient balance";
    }
    else{
        Balance += Balance;
        return Balance;
    }

}