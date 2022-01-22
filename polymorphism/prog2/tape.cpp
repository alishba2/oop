#include"tape.h"
#include<iostream>
#include<string>
using namespace std;

tape ::tape(string t , int p , int T ): publication(t,p){
    timeOfPlaying=T;
}

void tape ::show(){
    publication :: show();
    cout<<"Time of Playing: "<< timeOfPlaying<<endl;
}

bool tape ::Isoversized(){
    if(timeOfPlaying>30){
        return true;
    }
    else{
        return false;
    }
}