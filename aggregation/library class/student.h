#include<iostream>
#include<string>
using namespace std;


// STUDENT CLASS

class student{
    private:
    int id;
    string name;
    string program;
    // char issuedBook;
    

    public:
    void get();
    void show();
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    string getProgram(){
        return program;
    }
    
};