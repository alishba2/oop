#include<iostream>
#include<string>
#include"book.h"
using namespace std;

void book :: getData(){
    cout<<"Enter Page Count : "<<endl;
    cin >> pageCount;
    publishing2 :: getData();
    publishing2 :: getDate();
    sale:: getData();
}

void book :: putData(){
    cout<<"Page Count : "<<pageCount<<endl;
    publishing2::putData();
    publishing2 :: putDate();
    sale :: putData();

}