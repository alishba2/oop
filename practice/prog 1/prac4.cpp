#include<iostream>
#include<string>
using namespace std;
class anexp{

};
class realEstate{
    char hlocation;
    float houseprice;
    int roomcount;
    public:
    realEstate(char h, float p, int r){
        hlocation = h;
        houseprice = p;
        roomcount = r;
    }
    char sethouselocation(){
       return hlocation;
    }
    float sethouseprice(){
        return houseprice;
    }
    int setroomcount(){
        return  roomcount;
    }
};
int main(){

    realEstate e('a',39000,5);
    try{
        if(e.sethouselocation()!='N'){
            throw anexp();
        }
    }
    catch (anexp){
        cout<<"EXCEPTION OCCOURED!";
    }
    try{if(e.sethouseprice()<100000){
        throw anexp();
    }
    }
    catch (anexp){
        cout<<"EXCEPTION OCCOURED";
    }
  
    
   

}