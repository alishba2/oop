#include<iostream>
#include"Time.h"
using namespace  std;

int main(){
    Time t1(2,5,6) , t2(2,5,18);
    if(t1==t2){
      cout<<"yes they are equal "<<endl;
    };
    if((t1!=t2)==false){
      cout<<"yes they are not equal"<<endl;
    }
    if(t1>t2){
      cout<<"yes t1 is greater";
    }
     if(t1>=t2){
      cout<<"yes t1 is greater and equal"<<endl;
    }
    if((t1<t2)==false){
      cout<<"yes t2 is greatrer";

    }
      if((t1<=t2)==false){
      cout<<"yes t2 is greatrer and equal"<<endl;

    }
    

    return 0;
}