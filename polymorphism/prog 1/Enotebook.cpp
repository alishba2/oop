#include<iostream>
#include<string>
#include"Enotebook.h"

Enotebook::Enotebook() : notebook(){
    size = 10;
    
}
Enotebook :: Enotebook(float S ,float p , int i , string n) :  notebook(p , i , n){
    S = size;

}

void Enotebook :: get(){
    
    cout<<"******ENOTEBOOKS*********"<<endl;
    notebook ::get();
    cout << "Enter size of Ebook : "<<endl;
    cin >> size;
    
}
void Enotebook ::show(){
    notebook :: show();
    cout<<"Size :"<<size<<endl;
    
}
bool Enotebook ::isoversized(){

    if(size > 15){
        return true;
    }
    else{
        return false;
    }
    


}