#include<iostream>
#include "baseClass.h"
#include"derivedClass.h"
using namespace std;

int main(){
    baseClass obj_base;
    derivedClass obj_derived;
    baseClass *pointer_of_baseclass;
    // POINTER OF BASE CLASS POINTING TO THE OBJECT OF DERIVED CLASS
    pointer_of_baseclass = & obj_derived;
    // POINTER OF BASE CLASS ONLY ACCESS THE FUNCTION AND VARIABLE OF ITS OWN CLASS IT WONT ACCESS ANY FUNCTION FROM DERIVED CLASS

    // BY USING VIRTUAL FUNCTION WE CAN ACCESS THE DISPLAY FUNCTION FROM DERIVED CLASS
    pointer_of_baseclass ->display();

    // derivedClass *pointer_of_derivedClass;
    // pointer_of_derivedClass = &obj_derived;
    // pointer_of_derivedClass->derived_var=20;
    // pointer_of_derivedClass->display();
  

    return 0;


}