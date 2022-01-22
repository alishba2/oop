#include<iostream>
#include<string>
using namespace std;
#include"list.h"

int main(){
    list l1;
    
    l1.Read();
 
    int choice;
    char ch = 'Y';
    string name;
    string title;


    // menue option

    do{
        cout<<"ENTER 1 TO DISPLAY ALL THE INFO OF WRITER /n ENTER 2 TO FIND BY NAME OF WRITER /N ENTER 2 T FIND BY TITLE OF BOOK";
        cin >> choice;

        if(choice == 1){
            l1.Show();
        }
        else if(choice == 2){
            cout<<"Enter name of writer: "<<endl;
            cin >> name;
            l1.FindByName(name);



            
        }
        else if(choice == 3){
            cout<<"Enter title of book: "<<endl;
            cin >>title;
            l1.FindByTitle(title);
        }
        cout<<"Enter N to exit and y to continue"<<endl;
        cin >> ch;
    }while(ch != 'N');
       return 0;
}