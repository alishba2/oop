#include<iostream>
#include<string>
#include "list.h"
using namespace std;


void list::add()
 {
     cout<<"Adding student information"<<endl;
 for (int i = 0; i <= 2; i++)
 {
    b[i].getbookId();
    s[i].get(); 
    b[i].getbookId(); 
    b[i].getperId(); 
    b[i].getBookTitle(); 
    b[i].getbookStatus(); 
    s[i].getId(); 
    s[i].getName();
    s[i].getProgram();

 } 
 cout<<"Adding books information"<<endl;
 for(int i=0; i<=2; i++){
     b[i].getInfo();
    
 }

 }
 void list ::issue(){
     string prog;
     string bookname;
     int pos;

     cout<<"Enter Your program : "<<endl;
     cin >> prog;

     if(prog == "BS" ||prog=="bs"||prog=="ms"||prog=="MS"){
         cout<<"Enter book name: "<<endl;
         cin>>bookname;
         cout<<endl;
         cout<<"Enter Your id: ";
         cin >>pos;
         for(int i=0; i<=2; i++){
             if(bookname == b[i].getBookTitle()){
                 cout<<"book issued"<<endl;
                 b[i].display();
             }
          
             
         }

     }


     
 }
void list ::returnBook(){

    string pId;
    cout<<"Enter book you want to return: "<<endl;
    cin>>pId;
    for(int i=0; i<=2; i++){
        if(pId == b[i].getBookTitle()){
            cout<<"book returned"<<endl;
            b[i].display();
        }
    }

}

void list ::Find(){
    int c;
    string t;

    // cout<<"Enter 1 to search by book title"<<"Enter 2 to search by person Id";
    // cin >> c;

    // if(c == 1){
    //     int perId;
    //     cout<<"Enter Person Id: "<<endl;
    //     cin >> perId;

    //     for(int i=0; i<=2; i++){
    //         if(perId == s[i].getId());
    //         s[i].show();
    //     }
    // }
    // if(c == 2){
        cout<<"title of book you want to display"<<endl;
        cin >> t;
        for(int i=0; i<=2; i++){
            if(t == b[i].getBookTitle()){

                b[i].display();

            }
        }
    // }
}
void list ::ReservedBooks(){
    cout<<"RESERVED BOOKS";
    for(int i=0; i<=2; i++){
        if('R'== b[i].getbookStatus()){
            b[i].display();
        }
    }
}