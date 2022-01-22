#include"customer.h"

class bank{
    customer C[5];

    public:
    void ReadInfo();
    void Display();
    int Find(int n);
    void Deposit();
    void withdraw();
};