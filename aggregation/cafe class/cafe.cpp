#include<iostream>
#include<string>
using namespace std;

#include"cafe.h"


// READ INFO --------------------

void cafe :: ReadInfo(){
    for(int i=0; i<=2; i++){
        F[i].Get();
    }
}

// Display Menue-----------------

void cafe :: DisplayMenue(){
    for(int i=0; i<=2; i++){
        F[i].show();
    }
}

// Display min quantity--------------

void cafe :: MinQuantity(){
   int  Min = F[0].Tell_Quaintity();
   int pos = 0;
   for(int i=0; i<=2; i++){
       if(F[i].Tell_Quaintity()<Min){
           Min = F[i].Tell_Quaintity();
           pos = i;
       }
   }
   cout<<"Minimu Quantity available is: "<<endl;
   F[pos].show();

}
// If Available Function--------------

int cafe :: IfAvailable(string f){

    bool found = false;
    int pos = 0;
    for(int i=0; i<=2&&found==false; i++){
        if(f==F[i].Tell_name()){
          
            found = true;
            // cout<<"Found";
            pos = i;
           
        }
     
    
    }
    if(found == false){
        cout<<"Not Found "<<endl;
        pos = -1;
    }
  
    return pos;
}

int cafe :: calculatingBill(int n){

    
    int bill=0;

    bill = F[n].tell_price();

    return bill;
    

  

}

void cafe :: Buy(){
     string food;
        int quantity;
        int pos;
        int C;
        int total_bill=0;
        char ch;
      

        do{

            cout<<"ENTER FOOD YOU WANT TO BUY:"<<endl;
            cin>> food;
            pos = IfAvailable(food);
            if(pos==-1){
                cout<<"Food Item not found"<<endl;
            }
            else{
                cout<<"Enter the quantity of food: "<<endl;
                cin>> quantity;
                C = F[pos].updateQuantity(quantity);
                total_bill += C;
                cout<<"Do you want to continue , Enter Y to continue"<<endl;
                cin >> ch;

            }
        

        }while( ch != 'N');
        cout<<total_bill;

}