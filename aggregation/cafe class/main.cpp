#include<iostream>
#include<string>
#include"cafe.h"

using namespace std; 


int main(){
    cafe c1;
    c1.ReadInfo();



    //-----------------------------------Menue --------------------------------

    int option;
    cout<<"ENTER 1 TO DISPLAY THE MENUE: "<<endl<<
    "ENTER 2 TO DISPLAY FOOD ITEM OF MIN QUANTITY"<<endl<<"ENTER 3 TO BUY FOODITEMS";
    cin >> option;

    if(option==1){
    cout << "------------------------MENUE-------------------------"<<endl;
    c1.DisplayMenue();
    }

    else if(option==2){
    cout<<"--------------------------Min Quantity-------------------"<<endl;
    c1.MinQuantity();
    }

    else if(option==3){
        c1.Buy();
       
        

        
     
    }
    
   

    return 0;
}