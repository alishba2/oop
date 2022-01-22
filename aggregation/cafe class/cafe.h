#include<iostream>
#include<string>
using namespace std;

#include"food.h"

class cafe {

    food F[3];

    public:
    
    void ReadInfo();
    void DisplayMenue();
    void MinQuantity();
    void Buy();
    int IfAvailable(string f);
    int calculatingBill(int n);

    

    
};
