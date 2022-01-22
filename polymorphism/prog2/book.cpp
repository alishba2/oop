#include"book.h"
#include<iostream>
using namespace std;


book ::book(string t , int p, int n) : publication(t ,p){
    no_of_paper=n;
}

void book ::show(){
    publication::show();
    cout<<"No of paper: "<<no_of_paper;

}

bool book ::Isoversized(){
    if(no_of_paper > 800){
        return true;
    }
    else{
        return false;
    }
}