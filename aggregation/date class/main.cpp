#include<iostream>
#include"Date.h"
using namespace std;

int main(){
    Date d1;
    Date d2(6,6,2021);
    Date d3(4,1,2019);
    Date d4;

    // DISPLAY-------------------------------------------------------------------
    cout<<"--------------------------Display Function---------------------------- "<<endl;
    d1.Display();
    cout<<endl;


    // GET FUNTION---------------------------------------------------------------
    cout<<endl<<"---------------------Get Function------------------------------"<<endl;
    d1.Get();
    // Displaying get function
    cout<<endl<< "You Entered: ";
    d1.Display();

    // Is Valid Function

    cout<<endl;

    cout<<"--------------------IS Valid Function--------------------------------"<<endl;
    cout<<d1.IsValid()<<endl;

    // NEXT DATE FUNCTION--------------------------------------------------------
    cout<<endl<<"-------------------End Date Function ------------------------"<<endl;
    cout<<endl;
    d1.NextDate();
    cout<<endl<<"Next Date is: ";
    // Displaying nextdate function
    d1.Display();

    // PREVIOUS DATE FUNCTION---------------------------------------------------
    cout<<endl<<"------------------Previous Date Function---------------------"<<endl;
    cout<<endl;
    d1.PreviousDate();
    cout<<endl<<"Previous Date is: ";
    cout<< endl;
    d1.Display();

    // IS GREATER THAN FUNCTION-------------------------------------------------
    cout<<endl<<"------------------IsGreater Function-------------------------"<<endl;
    cout<<endl<<"First date: ";
    d2.Display();
    cout<<endl<<"Second date: ";
    d3.Display();
    cout<<endl;
    d4.IsGreaterThan(d2 , d3);
    cout<<endl;

    // CALCULATE NO OF DAYS FUNCTION--------------------------------------------
    cout<<endl<<"----------------------Calculating no of days function----------------- "<<endl;
    d4.CalculateNoOfDays(d2, d3);
   

    return 0;
}

