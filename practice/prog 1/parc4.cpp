#include<iostream>
using namespace std;
class anexp{

};
class job{
    int id;
    int salary;
    public:
    void get(){
        cout<<"Enter id: "<<endl;
        cin>>id;
        cout<<"Enter salary"<<endl;
        cin>>salary;

    try{
        if(salary<250){
            throw anexp();
        }
    }
    catch(anexp){
        cout<<"exception";
    }}
    // try{
    //     if(id > 999){
    //         throw anexp();
    //     }
    // }
    // catch(anexp){
    //     cout<<"exception";
    // }
    
    // }


};
int main(){
    job j;
    j.get();
}