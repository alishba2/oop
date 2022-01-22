#include"list.h"
#include<iostream>
using namespace std;

void list ::Readfile(){
    
      string s1,s2,s3,s4;
        ifstream ifile("data.txt");
        for(int i=0; i<6; i++){
            getline(ifile,s1,':');
            getline(ifile, s2 , ':');
            getline(ifile , s3, ':');
            getline(ifile , s4 );
            
            if(s1 == "b"){
            P[i] = new book((s2) , stoi(s3) , stoi(s4));
        }
            else
            P[i]=new tape(s2 , stoi(s3), stoi(s4));

        }
        

    
}
void list ::show_Publication(){
    for(int i=0 ; i<6 ; i++){
        P[i]->show();
    }
}

void list ::OverSized(){
    cout<<"DISPLATING OVERSIZED BOOK"<<endl;
    bool found = false;
    for(int i=0; i<6; i++){
    if(P[i]->Isoversized()){
        P[i]->show();
        found = true;
    }
    }
    if(found = false){
        cout<<"There is no oversized book or tape"<<endl;
    }
    
}
void list ::ShowPublicationByTitle(){
    string t;
    cout<<"Enter name of publication:"<<endl;
    cin>> t;
    for(int i=0 ; i<6 ;i++){
        if(P[i]->returntitle()==t){
            P[i]->show();
        }
    }
}