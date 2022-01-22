#include "mall.h"
#include<iostream>

#include<string>
using namespace std;

void mall ::getInfo(){
   char choice;

   for(int i=0; i<4; i++){
       cout<<"Enter U for Utility item and F for food item: "<<endl;
       cin >> choice;
       if(choice == 'U'){
           I[i] = new utilityItem;
       }
       else if(choice == 'F'){
           I[i] = new foodItem;
       }
       else{
           cout<<"Please Enter correct input"<<endl;
       }
       I[i]->get();
   }
}

void mall ::FindByProductId(){
    
    int ID;
    cout<<"Enter id: "<<endl;
    cin>> ID;
    for(int i=0 ; i<=4; i++){
        if(ID == I[i]->Tell_id()){
            I[i]->show();
        }
    }

}

void mall ::DisplayData(){

    for(int i=0; i<4; i++){
        I[i]->show();
    }
}

void mall :: UpdateInfo(){
    
    int ID;
    cout<<"ENTER ID OF THE PRODUCT: "<<endl;
    cin>> ID;
    for(int i=0 ; i<=4; i++){
        if(ID == I[i]->Tell_id()){
            I[i]->get();
        }
    }
       
   }


void mall :: MinPrice(){
    
    int pos = 0;
    float  Min = I[0]->Tell_price();
    for(int i=0; i<4; i++){
         
         if( I[i]->Tell_price()<Min){
             Min = I[i]->Tell_price();
             pos = i;

         }
    }
    I[pos]->show();

}