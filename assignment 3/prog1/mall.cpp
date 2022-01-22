#include "mall.h"
#include<iostream>

#include<string>
using namespace std;

void mall ::getInfo(){
    cout<<"---------------ENTERING DATA ---------------"<<endl;
   char choice;
   for(int i=0; i<4; i++){
       cout<<"Enter u for utility item and f for food item: "<<endl;
       cin >> choice;
       if(choice == 'u'){
           I[i] = new utilityItem;
       }
       else if(choice == 'f'){
           I[i] = new foodItem;
       }
       else{
           cout<<"wrong input"<<endl;
       }
       I[i]->get();
   }
}

void mall ::FindByProductId(){
    cout<<"---------------FINDING PRODUCT BY ID----------------"<<endl;
    int ID;
    cout<<"ENTER ID OF THE PRODUCT: "<<endl;
    cin>> ID;
    for(int i=0 ; i<=4; i++){
        if(ID == I[i]->tellId()){
            I[i]->show();
        }
    }

}




void mall ::DisplayData(){
    cout<<"----------DISPLAYING ITEMS IN MALL-----------------"<<endl;
    for(int i=0; i<4; i++){
        I[i]->show();
    }
}

void mall :: UpdateInfo(){
    cout<<"---------------FINDING PRODUCT BY ID----------------"<<endl;
    int ID;
    cout<<"ENTER ID OF THE PRODUCT: "<<endl;
    cin>> ID;
    for(int i=0 ; i<=4; i++){
        if(ID == I[i]->tellId()){
            I[i]->get();
        }
    }
       
   }


void mall :: MinPrice(){
    cout<<"------------------------DISPLAYING MINIMUM PRICE------------------"<<endl;
    int pos = 0;
    float  Min = I[0]->tellPrice();
    for(int i=0; i<4; i++){
         
         if( I[i]->tellPrice()<Min){
             Min = I[i]->tellPrice();
             pos = i;

         }
    }
    I[pos]->show();

}