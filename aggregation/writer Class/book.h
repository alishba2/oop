#include<iostream>
#include<string>
using namespace std;


class book{
    private:
    string title;
    int price;

    public:
    void get();
    void show();
    string tellTitle(){
        return title;
    }
};