#include<iostream>
#include<string>
using namespace std;
#include"list.h"

void list :: Read(){
    for(int i=0 ; i<=4 ; i++){
        W[i].Read();
    }
}

void list :: Show(){
    for(int i=0; i<=4 ; i++){
        W[i].DisplayInfo();
    }
}

string list :: By_name(string Name){
    bool found == true;
    for(int i=0; i<=4 ; i++){
        if(Name == W[i].Tell_name()){
            W[i].Display());
            found = true;
        }
    }
    if(found = false){
        cout<<"Not found";
    }
}
string list :: By_title(int Title){

    bool found = false;
    for(int i=0; i<=4; i++){
        if(W[i].FindBook(T)==0){
            W[i].DisplayInfo();
            found = true;
        }
    }
    if(found == false){
        cout<<"not found";
    }

}