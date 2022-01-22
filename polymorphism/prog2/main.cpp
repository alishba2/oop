#include<iostream>
#include<string>
#include"list.h"
using namespace std;


int main(){
    list l1;
    l1.Readfile();
    // l1.show_Publication();
    // l1.OverSized();
    // l1.ShowPublicationByTitle();

     int choice;
    char ch = 'Y';

    // MENUE

    
  
    do{
    cout<<"Enter 1 to SHOW PUBLICATIONS: "<<endl<<"Enter 2 to Display oversized books:"<<endl<< "Enter 3 to dislplay publication by title:"<<endl;
    cin >> choice;
    if(choice == 1){
        l1.show_Publication();
 
    }
    else if(choice == 2){
        l1.OverSized();
    }
    else if (choice == 3){
        l1.ShowPublicationByTitle();
    }
   
    cout<<"Enter Y if you want to continue: / N to exit: "<<endl;
    cin>>ch;
    

    }while(ch != 'N');

}
