#include<iostream>
#include<string>
#include"book.h"
using namespace std;

void book ::getInfo(){
    cout<<"Enter book id: "<<endl;
    cin >> bookId;
    cout<<"Enter book Title: "<<endl;
    cin>>title;
    cout<<"Enter status of book(F for free and R for reseved): "<<endl;
    cin>> status;
}
void book ::display(){
    cout<<"BOOK ID:"<<bookId<<endl<<"TITLE:"<<title<<endl<<"STATUS: "<<status<<endl;
}
