#include<iostream>
#include<string>
#include"list.h"
#include"notebook.h"
#include"Enotebook.h"
#include"pnotebook.h"

int main(){
    list l1;
    l1.GetData();

    int choice;
    char ch = 'Y';

    // MENUE

    
  
    do{
    cout<<"Enter 1 to Display Information of notebook: "<<endl<<"Enter 2 to Display Total Price of all books"<<endl<< "Enter 3 to display minimum price"<<endl<<"4 to display oversized "<<endl;
    cin >> choice;
    if(choice == 1){
        l1.InfoOfBooks();
 
    }
    else if(choice == 2){
        l1.TotalPrice();
    }
    else if (choice == 3){
        l1.MinPrice();
    }
    else if(choice == 4){
        l1.displayingOversized();

    }
    cout<<"Enter Y if you want to continue: / N to exit: "<<endl;
    cin>>ch;
    

    }while(ch != 'N');

}