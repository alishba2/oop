#include<iostream>
using namespace std;

class date{
    private:
    int day,month,year;
    public:
    date(){
        day =5;
        month = 10;
        year = 2020;
    }
    bool IsValid(){

        if(year >=1 ){
            if((month>=1) && (month<=12)){
                if(month==1||month==3||month==5||month==7||month==9||month==12){
                    if(day>=1&&day<=31){
                        return true;
                    }
                }
                if(month==4||month==6||month==8||month==10){
                    if(day>=1&&day<=30){
                        return true;
                    }
                }
                if(month==2){
                    if(year%4 == 0){
                        if(day>=1 && day<=29){
                            return true;
                        }
                    }
                    else {
                        if(day>=1 && day<=29){
                            return true;
                        }
                    }
                }
                return false;


            }
        }
        else {
            return false;
        }
    
    }
    void showdate(){
        cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void getdate(){
        do{
            cout<<"Enter day: "<<endl;
            cin>>day;
            cout<<"Enter month: "<<endl;
            cin>>month;
            cout<<"Enter year: "<<endl;
            cin>>year;
        }while(IsValid()!= true);
        
    }
    bool operator > (const date temp){
        
        if(year > temp.year){
            
            return true;
        }
        else{
            if(year == temp.year){
                if(month == temp.month){
                    if(day > temp.day){
                        return true;
                    }
                }
            }
            return false;

        }

    }
       bool operator < (const date d2){
        date temp;
        if(year < temp.year){
            
            return true;
        }
        else{
            if(year == temp.year){
                if(month == temp.month){
                    if(day < temp.day){
                        return true;
                    }
                }
            }
            return false;

        }

    }
bool operator <= (const date d2){
        date temp;
        if(year <= temp.year){
            
            return true;
        }
        else{
            if(year == temp.year){
                if(month == temp.month){
                    if(day <= temp.day){
                        return true;
                    }
                }
            }
            return false;

        }

    }
bool operator == (const date d2){
        date temp;
        if(year == d2.year){
            if(month == d2.month){
                if(day ==d2.day){
                    return true;
                }
            }
            return false;

        }
        else{
            return false;
        }
    }
bool operator != (const date d2){
        date temp;
        if(year == d2.year){
            if(month == d2.month){
                if(day ==d2.day){
                    return false;
                }
            }
            return true;
        }
        else{
            return true;
        }
    }
    date operator - (const date d2){

    
   date temp;
    int M[12]={31,28,31,30,31,30,31,31,30,31,30,31
    };
    int Y[50];
    int Total_Days;
    int d1;
    
    d1= day - d2.day;
    month= month - d2.month;
    year = year - d2.year;

    int m1 = 0;
    int y1 = 0;



    
// MONTHS
    for(int i=month; i<= d2.month-1;i++){
        m1 += M[i];
    }
    


    
// YEARS

    for(int i=d2.year; i<=year-1; i++){
        if(Y[i]%4 ==0){
            y1++;
        }

    }
   
   y1 = y1 + year*365;
   temp.day = d1;
   temp.month = m1;
   temp.year = y1;

    Total_Days = y1 + m1 + d1;
    cout<<Total_Days-59;
}
    
date operator ++(int){

date temp;

    
    day++;

    if(month==1||month==6||month==4||month||9||month==11){
        if(day==32){
            day=1;
            month++;
        }
        else if((month==3||month==5||month==7||month==8||month==10||month==12)){
            if(day==31){
                day=1;
                temp.month = month++;
            }
            
        }
        else  if(month==2)
        {
            if(year%4==0){
                if(day==30){
                    day=1;
                   temp.month = month++;
                }
            }
        }
        else{
            if(day==29){
                day=1;
              temp.month = month++;
            }
         
        }
           if(month==13){
                month=1;
                temp.year = year++;
            }
        }
      
        cout<<day<<"/";
        cout<<month<<"/";
        cout<<year;
        
    }  
date operator --(){

date temp;

    
    --day;

    if(month==1||month==6||month==4||month||9||month==11){
        if(day==0){
            day=31;
            --month;
        }
        else if((month==3||month==5||month==7||month==8||month==10||month==12)){
            if(day==0){
                day=31;
                temp.month = --month;
            }
            
        }
        else  if(month==2)
        {
            if(year%4==0){
                if(day==0){
                    day=31;
                   temp.month = --month;
                }
            }
        }
        else{
            if(day==0){
                day=31;
              temp.month = --month;
            }
         
        }
           if(month==0){
                month=12;
                temp.year = --year;
            }
        }
      
        cout<<day<<"/";
        cout<<month<<"/";
        cout<<year;
        
    }  


};
int main(){
   
    date d1 , d2 ,d4,d5,d6;
    bool d3;
    d1.getdate();
    d2.getdate();
    cout<<"DATE 1 IS GRATER THAT DATE 2: "<<endl;
    d3 = d1 > d2;
    cout<<d3<<endl;
    cout<<"DATE IS SMALLER THAN DATE 2: "<<endl;
    d3 = d1 < d2;
    cout <<d3;
    cout<<endl;
    cout<<"DATE 1 IS SMALLER OF EQUAL TO DATE 2"<<endl;
    d3 = d1 <= d2;
    cout<< d3;
    cout<<endl;
    cout<<"DATE 1 IS EQUAL TO DATE 2"<<endl;
    d3 = d1 == d2;
    cout <<d3;
    cout<<endl;
    cout<<"DATE 1 IN NOT EQUAL TO DATE 2"<<endl;
    d3 = d1 != d2;
    cout <<d3;
    cout<<endl;
    cout<<"NO OF DAYS BETWEEN ENTERED DATES"<<endl;
    d4 = d1 - d2;
    
    cout<<endl;
    
    cout<<"INCREMENTING DATE"<<endl;
    d5.getdate();
    d5++;
    cout<<endl;
    cout<<"DECREMENTING DATE"<<endl;
    --d5;



    return 0;
    
}