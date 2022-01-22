#include<iostream>
#include<string>
#include"publication.h"
using namespace std;


// FUNCTION DEFINATION

publication ::publication(string t , int p){
    title=t;
    price=p;

}

void publication ::show(){
    cout<<"Title is: "<< title<<endl<<"Price is:"<<price<<endl;
}
