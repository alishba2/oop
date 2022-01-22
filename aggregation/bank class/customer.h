#include<iostream>
#include<string>
using namespace std;

class customer{
    private:
    int account_no;
    string Name;
    int Balance;
    public:
    void Get();
    void Show();
    int Tell_acc(){
        return account_no;
    }
    int Tell_balance(int amt);

    int w_draw(int n);
    

};