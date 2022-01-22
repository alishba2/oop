#include<iostream>
using namespace std;

class RealEstate {
    char hlocation;
    float housePrice;
    int roomcount;

    public:
    RealEstate(char ch , float hP , int rc){
        hlocation = ch;
        housePrice = hP;
        roomcount = rc;
    }
    void SetHlocation(){
        cout<<"Enter location"<<endl;
        hlocation;

    }
    void setHousePrice(){
        cout<<"Enter Price"<<endl;
        cin>>housePrice;
    }
    void roomcout(){
        cout<<"Enter Room count"<<endl;
        cin >>roomcount;
    }

    void show(){
        cout<<
    }


};