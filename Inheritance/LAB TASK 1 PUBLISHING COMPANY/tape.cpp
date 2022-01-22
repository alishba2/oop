#include<iostream>
#include<string>
#include"tape.h"
using namespace std;

void tape :: getData(){
    cout<<"Enter Playing time: "<<endl;
    cin >> playing_time;
    publishing2 :: getData();
    publishing2:: getDate();
    sale :: getData();
}

void tape :: putData(){
    cout<<"Playing Time: "<<playing_time<<endl;
    publishing2 :: putData();
    publishing2:: putDate();
    sale :: putData();
}