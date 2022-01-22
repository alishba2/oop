#include<iostream>

#include<string>

using namespace std;

class book{
    private:
    string Title;
    float Price;
    int Quantity;
    
    public:
    void Get();
    void Show();
    float TellPrice();
};