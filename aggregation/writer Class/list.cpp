#include<iostream>
#include<string>
#include"list.h"

void list :: Read(){
    for(int i=0 ; i<=2;i++){
        W[i].ReadInfo();
    }
}

void list :: Show(){
    for(int i=0; i<=2; i++){
        W[i].DisplayInfo();
    }
}
string list :: FindByName(string N){

    bool found = false;
    for(int i=0; i<=2 ; i++){
        if(N == W[i].TellName()){
            W[i].DisplayInfo();
            found = true;
        }
    }
    if(found == false){
        cout<<"not found";
    }
 
    }

string list :: FindByTitle(string T){
   bool found = false;
   
    for(int i=0; i<=2; i++){
        if(true == W[i].FindBook(T)){
            W[i].DisplayInfo();
            found = true;
        }
    }
    if(found == false){
        cout<<"not found";
    }
}
   

