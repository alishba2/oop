#include<iostream>
#include<string>
#include"manager.h"
using namespace std;

void manager:: get(){
    cout<<"Enter no of tasks : "<<endl;
    cin >> no_of_tasks;
    employee ::get();
}

void manager :: display(){
    cout<<"No of tasks : "<<no_of_tasks<<endl;
    employee::display();
}