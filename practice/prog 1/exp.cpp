// EXCEPTION HANDLING

#include<iostream>
using namespace std;
class DivideByzero{
    int num;
    public:
    DivideByzero(int n){
        num = n;
    }
    void display(){
        cout<<"numberator divided by zero";
    }

};
int quotient(int a , int b){
    return a/b;
}
int main(){
    int a,b;
    try{
       
        cout<<"Enter a; "<<endl;
        cin >>a;
        cout<<"Enter b: "<<endl;
        cin>>b;
         if(a == 0){
        cout<<quotient(a,b);
        throw DivideByzero(a);
        }
        

    }
    catch(DivideByzero e){
        e.display();
        
    }

    return 0;
}