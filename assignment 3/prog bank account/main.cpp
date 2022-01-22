#include<iostream>
#include"record.h"
using namespace std;

int main(){

    // CREATING OBJECT

    record r1;

    // READING DATA FROM THE FILE
    r1.ReadData();
  

    // MENUE OPTIONS

    char ch;
    int choice;

    do{
        cout<<"Enter 1 to display data "<<endl<<"Enter 2 to check balance"<<endl<<"Enter 3 to withdraw money"<<endl<<"Enter 4 to deposit money"<<endl
    <<"Enter 5 to Find by Account no"<<endl<<"Enter 6 to update Information"<<endl;
    cin >>choice;

    if(choice == 1){

        r1.DisplayData();
    }
    else if(choice == 2){
        r1.CheckBalance();
    }
    else if(choice == 3){
        r1.withdrawAmount();
    }
    else if(choice == 4){
        r1.depositAmount();
    }
    else if (choice == 5){
        r1.FindByAccountNO();
    }
    else if(choice == 6){
        r1.UpdateInfo();
    }
    cout<<endl;

    cout<<"Enter Y to continue and N to exit from the loop"<<endl;
    cin>> ch;

    }while(ch !='N');

//  writing data in file

    r1.writeData();
    return 0;
}
