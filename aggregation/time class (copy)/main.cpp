#include<iostream>
#include"Time.h"
using namespace  std;

int main(){
    Time t1;
    // t1.Get();
  
    t1.increment();
      t1.Display();
      t1.Get();
      t1.Display();
      t1.decrement();
      t1.Display();


    return 0;
}