#include<iostream>
#include<string>
#include"book.h"
#include "tape.h"
#include"disk.h"


int main(){
    book b;
    tape t;
    disk d;
    cout<<"-----------------ENTER DATA OF BOOK----------------- "<<endl;
    b.getData();
    cout <<"----------------DISPLAY DATA OF BOOK--------------- "<<endl;
    b.putData();
    cout<<"-----------------ENTER DATA OF TAPE-----------------"<<endl;
    t.getData();
    cout<<"-----------------DISPLAY DATA OF TAPE----------------"<<endl;
    t.putData();
    cout<<"-----------------ENTER DATA OF DISK-------------------"<<endl;
    d.getData();
    cout<<"-----------------DISPLAY DATA OF DISK------------------"<<endl;
    d.putData();
}