#include<iostream>
using namespace std;
#include<string>
#include "list.h"

int main(){

    list l1;

    int choice;
    string name;
    string title;

    // MENUE

    cout<<"Enter 1 to diplay writers information /n Enter 2 to find writer by name /n Enter 3 to find by title"<<endl;
    cin>>choice;
    if(choice == 1){
        l1.Read();
        l1.Display();
    }
    else if(choice == 2){
        cout<<"Enter name of writer";
        cin >> name;
        l1.By_name(name);
    }
    else if(choice == 3){
        cout<<"Enter title : ";
        cin>>title;
        l1.By_title(title);
    }
  

}