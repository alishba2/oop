#include<iostream>
#include<string>
#include"manager.h"
#include"P.h"
using namespace std;

int main(){
    P alishba;
    manager moona;
     cout<<"------------------"<<endl;
    alishba.get();
    cout<<"------------------"<<endl;
    alishba.display();
    cout<<"------------------"<<endl;
    moona.get();
    cout<<"------------------"<<endl;
    moona.display();
    cout<<"------------------"<<endl;
    return 0;
}