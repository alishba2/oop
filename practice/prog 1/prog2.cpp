#include<iostream>
using namespace std;
template <class T>
T circleArea (T r)
{
  return (3.14*(r*r));
}
int main(){
    
    double a ;
   
    cout<<"INTEGER ARGUMENT"<<endl;
    double b = circleArea<double>(3);
    cout<<"AREA IN DOUBLE IS: "<<b<<endl;

     cout<<"DOUBLE ARGUMENT"<<endl;
    a = circleArea<double>(5.4);
    cout<<"AREA IN DOUBLE IS :"<<a<<endl;


    return 0;
}