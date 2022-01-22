#include"bank.h"

// ReadInfo

void bank :: ReadInfo(){
    for(int i=0; i<=4; i++){
        C[i].Get();

    }
}

// Display


void bank :: Display(){
    for(int i=0; i<=4; i++){
        C[i].Show();

    }
}

int bank :: Find(int n){
    int found = false;
    int pos = 0;
    for(int i=0; i<=4&&found==false; i++){
        if(n==C[i].Tell_acc()){
            pos = i;
            found = true;
        }
    }
    if(found==false){
        pos = -1;
    }
    return pos;

}
void bank :: Deposit()
{
    int n; 
    int amt;
    int pos = 0;
    cout<<"Enter Your Account number: "<<endl;
    cin >> n;
    pos = Find(n);
    if(pos==-1){
        cout<<"Your Account doesn't exist"<<endl;
    }
    else{
        cout<<"Enter Balance you want to deposit:";
        cin >> amt;
        C[pos].Tell_balance(amt);
        
    }
}

void bank :: withdraw(){
     int n; 
    int amt;
    int pos = 0;
    cout<<"Enter Your Account number: "<<endl;
    cin >> n;
    pos = Find(n);
    if(pos==-1){
        cout<<"Your Account doesn't exist"<<endl;
    }
    else{
        cout<<"Enter Balance you want to deposit:";
        cin >> amt;
        cout<< "remaining amount"<<C[pos].w_draw(amt);
        
    }
}

