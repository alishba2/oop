#include<iostream>
#include<string>
using namespace std; 
#include"Date.h"

// CONSTRUCTOR #1------------------------------------------------------------------------------------------------------------------------------------------

Date :: Date(){
    day = 3;
    month = 12;
    year = 2021;
}

// CONSTRUCTOR #2-------------------------------------------------------------------------------------------------------------------------------------------

Date :: Date(int d , int m , int y){
    day = d;
    month = m;
    year = y;
    
}

// DISPLAY FUNCTION-----------------------------------------------------------------------------------------------------------------------------------------

void Date :: Display(){
    cout<<endl<< day << "/"<< month << "/"<<year;
}

// ISVALID FUNCTION----------------------------------------------------------------------------------------------------------------------------------------

bool Date :: IsValid(){
    if(month>=1 && month <=12){
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
            if(day>=1 && day<= 31){
                return true;
            }
        }
        else 
        return false;

        if(month==4||month==6||month==9||month==11){
              if(day>=1 && day<= 30){
                return true;
            }
        }
        else 
        return false;

        if(month==2){
            if(year%4==0){
                if(day>=1 && day<= 29){
                return true;
            }
            else{
                if(day>=1 && day<= 28){
                return true;
            }
            }
            }
        }
        else 
        return false;



    
    }
        else return false;}

// GET FUNCTION--------------------------------------------------------------------------------------------------------------------------------------------

void Date :: Get(){
    do{
        cout<<"Enter Day: "<<endl;
        cin >> day;
        cout<< "Enter Month: "<<endl;
        cin>> month;
        cout<<"Enter Year: "<<endl;
        cin >> year;
    }while(IsValid()!=false);

}

// NEXDATE FUNCTION----------------------------------------------------------------------------------------------------------------------------------------

void Date :: NextDate(){
    
    day++;
    if(month==1||month==6||month==4||month||9||month==11){
        if(day==32){
            day=1;
            month++;
        }
        else if((month==3||month==5||month==7||month==8||month==10||month==12)){
            if(day==31){
                day=1;
                month++;
            }
            
        }
        else  if(month==2)
        {
            if(year%4==0){
                if(day==30){
                    day=1;
                    month++;
                }
            }
        }
        else{
            if(day==29){
                day=1;
                month++;
            }
         
        }
           if(month==13){
                month=1;
                year++;
            }
        }
    }  
   
// PREVIOUSDATE FUNCTION---------------------------------------------------------------------------------------------------------------------------------------

void Date :: PreviousDate(){
    
    day--;
    if(month==1||month==6||month==4||month||9||month==11){
        if(day==0){
            day=31;
            month--;
        }
        else if((month==3||month==5||month==7||month==8||month==10||month==12)){
            if(day==0){
                day=30;
                month--;
            }
            
        }
        else  if(month==2)
        {
            if(year%4==0){
                if(day==0){
                    day=29;
                    month--;
                }
            }
        }
        else{
            if(day==0){
                day=28;
                month--;
            }
         
        }
           if(month==0){
                month=12;
                year--;
            }
        }
    }  


// ISGREATERTHAN FUNCTION --------------------------------------------------------------------------------------------------------------------------------

 void Date :: IsGreaterThan(Date d2 , Date d3){
     if(d2.year==d2.year){
         if(d2.month==d3.month){
             if(d2.day > d3.day){
                 cout<<"Date 1 is greater";
             }
             else{
                 cout<<"Date 2 is greater";
             }
         }
         if(d2.month>d3.month){
             cout<<"Date 1 is greater";
         }
         if(d2.month<d3.month){
             cout<<"Date 2 is greater";
         }
     }
     else if(d2.year>d3.year){
          cout<<"Date 1 is greater";
     }
     else{
         cout<<"Date 2 is greater";
     }
  
    
 }

//  CALCULATE NO OF DAYS FUNCTION -------------------------------------------------------------------------------------------------------------------------

void Date :: CalculateNoOfDays(Date d2 , Date d3){
    int Day ;
    int Month;
    int Year;
    int M[12]={31,28,31,30,31,30,31,31,30,31,30,31
    };
    int Y[50];
    int Total_Days;
    

    Day = d2.day - d3.day;
    Month = d2.month - d3.month;
    Year = d2.year - d3.year;
    int m1 = 0;
    int y1 = 0;



    
// MONTHS
    for(int i=d3.month; i<= d2.month-1;i++){
        m1 += M[i];
    }
    


    
// YEARS

    for(int i=d2.year; i<=d3.year-1; i++){
        if(Y[i]%4 ==0){
            y1++;
        }

    }
   
   y1 = y1 + Year*365;
   
   
   
   Total_Days = Day + m1 + y1;

   cout << endl<<"no of days between dates : "<<Total_Days;

    
   

}