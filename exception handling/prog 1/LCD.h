#include <iostream>
#include <string>
using namespace std;
class AnExcp{

};
class LCD
{
public:
string ModelN;
int Screensize;
float itemPrice;
public:
LCD()
{
    ModelN=' ';
    Screensize=0;
    itemPrice=0.0;

}

void Read()
{
    cout<<"Enter model Number:"<<endl;
    cin>>ModelN;
   
    
    cout<<"Enter screen size: "<<endl;
    cin >> Screensize;

    cout<<"Enter Item Price: "<<endl;
    cin>>itemPrice;
  

        if(ModelN[0]=='V'){
            throw AnExcp();
        }
        if(( screenSize() <= 30)&&( screenSize()>=55)){
        throw AnExcp();}

        if((itemprice()<-1) && (itemPrice>90000)){
            throw AnExcp();
        }
    
 
    
}

string GetmodelN(){
    return ModelN;
};
int screenSize(){
    return Screensize;
}
float itemprice(){
    return itemPrice;
}

};



int main(){
    LCD l1,l2,l3;
     l1.Read();
    try{    
        l1.screenSize();
        l1.itemprice();
        l1.GetmodelN();


    }
    catch(AnExcp){
        cout<<"error";
    }
    
}