#include<iostream>
#include<string>
using namespace std;

class Anexption{

    public:

    void what(int n){
        cout<<"EXCEPTION IS DUE TO SIZE OF SCREEN WHICH IS:"<<n;
    }
    void what(string n){
        cout<<"EXCEPTION IS DUE TO MODEL NUMBER WHICH IS: "<<n;
    }

};


class LCD{
    string ModelN;
    int ScreenSize;
    float ItemPrice;

    public:
    LCD(){
        ModelN = " ";
        ScreenSize = 0;
        ItemPrice = 0.0;
    }
    void Read(){
        cout<<"Enter model number :"<<endl;
        cin >> ModelN;
        cout<<"Enter screen size : "<<endl;
        cin>> ScreenSize;
        cout<<"Enter Item price: "<<endl;
        cin>>ItemPrice;
    }
    string getModelN(){
        return ModelN;
    }
    int getscreenSize(){
        return ScreenSize;
    }
    float getItemPrice(){
        return ItemPrice;
    }

    

};
int main(){
    LCD l,l1,l2,l3;
    l1.Read();
    int a = l1.getscreenSize();
  
    try{
        if(l1.getscreenSize()>30){
            throw Anexption();
        }
    }
    catch(Anexption e){

        e.what(a);

    }
    l2.Read();
    float b = l2.getItemPrice();
    try{
        if(l2.getItemPrice()<0){
            throw Anexption();
        }
    }
    catch(Anexption e){
        e.what(b);
    }
    
}