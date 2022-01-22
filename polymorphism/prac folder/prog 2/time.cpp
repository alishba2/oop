
#include"time.h"
#include<iostream>
using namespace std;

time ::time(int s , int m, int h){
    sec = s;
    min = m;
    hr = h;
    
}

void time :: display(){
    cout<<"Time is : "<<sec<<":"<<min<<":"<<hr<<endl;
}