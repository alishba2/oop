#include<iostream>
#include<string>
using namespace std;
class person{
    private:
    int ID_CARD;
    string NAME;
    int PHONE_NUMBER;
    public:
    void GET();
    void SHOW();
    int tellId(){
        return ID_CARD;
    }
};