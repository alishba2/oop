#include<iostream>
#include<string>
#include"disk.h"
using namespace std;

void disk :: getData(){
    cout<<"Enter Disk Type / Enter D for DVD and C for CD"<<endl;
    cin>>DiskType;
    publishing :: getData();
}

void disk :: putData(){
    cout<<"Disk Type: "<< DiskType <<endl;
    publishing :: putData();
}