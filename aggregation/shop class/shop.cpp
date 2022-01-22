#include<iostream>
#include<string>
using namespace std;

#include "shop.h"

using namespace std;

void shop :: ReadInfo(){
    for(int i=0 ; i<=6; i++){
        B[i].Get();
    }
}
void shop :: DisplayInfo(){
    for(int i=0; i<=6; i++){
        B[i].Show();
    }
}
void shop :: TotalPrize(){
    int sum = 0;
    for(int i=0; i<=6; i++){
        sum = sum + B[i].TellPrice();
    }
    cout<<"Total Prize"<<sum;
}
void shop ::GreaterPrize(){
    float great = 0;
    int pos = 0;
    for(int i=0; i<=6; i++){
        if(B[i].TellPrice()>great){
            great=B[i].TellPrice();
            pos = i;

        }
        
    }
    B[pos].Show();

}
