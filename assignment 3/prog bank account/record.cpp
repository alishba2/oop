#include"record.h"
#include<iostream>
#include<string>
using namespace std;


void record ::ReadData(){

    string s1, s2, s3, s4, s5;
    ifstream ifile("data.txt");
    for(int i=0; i<4; i++){
        getline(ifile , s1 , ':');
        getline(ifile , s2 , ':');
        getline(ifile , s3 , ':');
        getline(ifile , s4 , ':');
        getline(ifile, s5);

        
        if(s1 == "c"){
            B[i]= new checkingAccount(stoi(s2),s3,stoi(s4),stoi(s5));
        }
        else{
            B[i] = new savingAccount(stoi(s2),s3, stoi(s4),stof(s5));
        }

    }
    
}

void record ::DisplayData(){
    for(int i=0 ;i<4; i++){
        B[i]->show();
    }
}

void record ::CheckBalance(){

    int no;
    cout<<"Enter your account no: "<<endl;
    cin>>no;
    for(int i =0 ; i<4 ; i++){
        if(no == B[i]->tellAccountNo()){
            B[i]->total_balance();
        }
    }
}

void record ::withdrawAmount(){
    int no;
    cout <<"Enter your account number : "<<endl;
    cin >> no;
    for( int i=0 ;i<4 ; i++){
        if(no == B[i]->tellAccountNo()){
            B[i]->withdraw();
        }
    }
}
void record :: depositAmount(){
    int no;
    cout<<"Enter your account nO: "<<endl;
    cin >> no;
    for(int i=0 ; i<4 ; i++){
        if(no == B[i]->tellAccountNo()){
            B[i]->deposit();
        }
    }
}

void record ::FindByAccountNO(){
    int no, pos =0 ;
    bool found = false;
    cout<<"Enter your account number: "<<endl;
    cin>>no;
    for(int i=0 ;i<4; i++){
        
        if(no ==B[i]->tellAccountNo()){
            pos = i;
            found = true;
             
        }


    }
    B[pos]->show();
    if(found==false){
        cout<<"YOUR ACCOUNT DOES NOT EXIST: "<<endl;
    }
}

void record ::UpdateInfo(){
    int no;
    cout<<"Enter your account number: "<<endl;
    cin >>no;
    for(int i=0 ;i<4; i++){
        if(no ==B[i]->tellAccountNo()){
            B[i]->get();
        }
    }
}

void record ::writeData(){
    ofstream ofile;
    ofile.open("output.txt");
    for(int i=0 ;i<4 ;i++){
         ofile<<"ACCOUNT NO: "<<B[i]->id()<<endl;
         ofile<<"NAME: "<<B[i]->name()<<endl;
         ofile<<"BALANCE: "<<B[i]->bal()<<endl;
    }
  
    ofile.close();


}