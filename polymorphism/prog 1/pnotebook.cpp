#include<iostream>
#include"pnotebook.h"

pnotebook :: pnotebook() : notebook(){
    noOfPages = 300;
}

pnotebook :: pnotebook(int P,float p , int i , string n) : notebook(p , i , n){
    P = noOfPages;

}

void pnotebook :: get(){
    cout<<"**********PAGE NOTEBOOKS*******"<<endl;
    notebook ::get();
    cout<<"Enter size of the pages: "<<endl;
    cin>> noOfPages;
       
}

void pnotebook :: show(){
    notebook ::show();
    cout<<"size of the pages : "<<noOfPages;
    
}
bool pnotebook:: isoversized(){
    if(noOfPages > 800){
        return true;

    }
    else{
        return false;
    }
}