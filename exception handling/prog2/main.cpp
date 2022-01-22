#include<iostream>
using namespace std;

class anexp{

};

int main(){
    int a,b;
    try{
        cout<<"Enter value 1: "<<endl;
        cin>>a;
        cout<<"Enter value 2: "<<endl;
        cin>>b;
        if(a == 0){
            throw anexp();
        }
        cout<<a/b;

    }
    catch(anexp){

        cout<<"EXCEPTION";
        
    }

}