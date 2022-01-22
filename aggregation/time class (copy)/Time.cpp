#include<iostream>
#include "Time.h"
using namespace std;

// CONSTRUCTOR

Time :: Time()
{
    hr = 3;
    min = 3;
    sec = 54;
}
 


// DISPLAY FUNCTION DEFINATION

void Time:: Display(){
    cout<< hr << ":"<< min<< ":"<< sec;
}

//  ISVALID FUNCTION DEFINATION

bool Time :: IsValid(){
    if(hr>=1 && hr<=12){
        if(min>=0 && min<=59){
            if(sec>=0 && sec<=59){
                return true;
          
            }
            else return false;
            
        }
    }
    else return false;
}
// GET FUNCTION DEFINATION

void Time :: Get(){
    do{
        cout<<"Enter hours: "<<endl;
        cin >> hr;
        cout<<"Enter min: "<<endl;
        cin >> min;
        cout<<"Enter sec: "<<endl;
        cin >> sec;

    }while(IsValid()==false);
}
// INCREMENT FUNCTION DEFINATION

void Time :: increment(){
    if(sec==59){
        sec==0;
        if(min == 59){
            min==0;
        }
        else min++;
        if(hr==12){
            hr==1;
        }
        else 
        hr++;
    }
    else 
    sec++;
}
// DECREMENT FUNCTION DEFINATION

void Time :: decrement(){
    if(sec==0){
        sec == 59;
        if (min == 0){
            min ==59;
        }
        else {
            min--;
        }
        if(hr==1){
            hr==12;
        }
        else 
        hr--;
    }
    else 
    sec--;
}