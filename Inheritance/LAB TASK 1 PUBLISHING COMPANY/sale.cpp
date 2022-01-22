#include<iostream>
#include<string>
#include "sale.h"

void sale :: getData(){
    
    for(int i=1; i<=3 ;i++){
        cout<<"Enter sale of "<< i<< "month"<<endl;
        cin>> S[i];
    }
}

void sale :: putData(){
    
    for(int i=1; i<=3 ;i++){
      cout<<"Sale of month"<< i<< S[i]<<endl;
    }
    }
