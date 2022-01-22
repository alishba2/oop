#include<iostream>
#include<string>
#include"list.h"

using namespace std;

void list :: GetData(){
    char choice;
    for(int i=0; i<4; i++){
        cout<<"Enter choice: / e for Ebook and p for paper book: "<<endl;
        cin>>choice;

        if(choice == 'e'){
            P[i] = new Enotebook;
        }
        else
            P[i] = new pnotebook;

        P[i]->get();
    }

}
void list ::InfoOfBooks(){
    cout<<"************INFORMATION OF BOOKS***********"<<endl;
    for(int i=0; i<4; i++){
        P[i]->show();
    }
}
void list ::TotalPrice(){
    cout<<"*******TOTAL PRICE OF BOOKS***********"<<endl;
    float sum = 0;
    for(int i=0; i<4; i++){
        sum = sum + P[i]->tellPrice();
    }
    cout<<"Total Price :"<<sum<<endl;
}
void list ::MinPrice(){
    cout<<"***********MIN PRICE****************"<<endl;
   
    int pos = 0; float M;
    for(int i=0; i<4; i++){
        M = P[0]->tellPrice();
        if(P[i]->tellPrice()<M){
            M = P[i]->tellPrice();
            pos = i;
        }

   }
    P[pos]->show();
}

void list ::displayingOversized(){
    int pos = 0;
    for(int i=0; i<4; i++){
        if(true==P[i]->isoversized()){
            pos=i;
            cout<<" -----OVERSIZED----"<<endl;
            P[pos]->show();
            
        }
        
        
        
    }
  
}




