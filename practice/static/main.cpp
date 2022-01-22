#include<iostream>
#include<string>
using namespace std;

class person {
  
    public:
    static int id;
    string name;
    person(){
        id = id+1;
        name = "";
    }
    void get(){
        cout<<"Enter you name: "<<endl;
        cin >> name;

    }
    void show(){
        cout<<"NAME OF PERSON :"<<name<<endl;
        cout<<"ID OF PERSON :"<<id;
    }

};
int person :: id = 0;

int main(){
    person p;
    
    p.get();
    p.show();
    person p1;
    p1.get();
    p1.show();
    return 0;
}