#include<iostream>
#include<string>
#include"writer.h"

void writer :: ReadInfo(){
    cout<<"Enter name of writer: ";
    cin >> name;
    cout<<"Enter no of book: ";
    cin >> noOfBooks;
    for(int i=0; i<=2 && i < noOfBooks ; i++){
        B[i].get();
    }
}

void writer :: DisplayInfo(){
    cout<<"--------Writer :"<<name<<endl;
    cout<<"--------NO of books written:"<< noOfBooks<<endl;
    for(int i=0; i<=2 && i < noOfBooks; i++){
        B[i].show();
    }
}

bool writer :: FindBook(string T) {
    for(int i=0; i<=2&& i < noOfBooks ; i++){
        if(T==B[i].tellTitle()){
            return true;
        }
        return false;
    }
}