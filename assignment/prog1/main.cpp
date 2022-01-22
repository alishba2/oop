#include<iostream>
#include<string>
#include"mall.h"
using namespace std;

int main(){
    mall m1;
    m1.getInfo();

    // MENUE

    cout<<"MENUE OPTIONS"<<endl;
    cout<<endl;
    char ch;
    int choice;

    do{

        cout<<"Enter 1 to Find Product By Id "<<endl<<"Enter 2 to Display Item of mall "<<endl<<"Enter 3 to update information"<<endl<<"Enter 4 to Display minimum price"<<endl;
        cin>> choice;
        if(choice == 1){
            m1.FindByProductId();
        }
        else if(choice == 2){
          m1.DisplayData();    
        }
        else if(choice == 3){
            m1.UpdateInfo();
        }
        else if(choice == 4){
            m1.MinPrice();
        }
        cout<<"Enter Y to continue and N to exit: "<<endl;
        cin >>ch;
        
    }while(ch != 'N');


    return 0;
}