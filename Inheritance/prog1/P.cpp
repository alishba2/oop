#include<iostream>
#include<string>
using namespace std;
#include"P.h"

void P :: get(){
    cout<<"Enter no of projects : "<<endl;
    cin >> no_of_projects;
    employee :: get();
}

void P :: display(){
    cout<<"No of Projects :"<<no_of_projects<<endl;
    employee::display();
}