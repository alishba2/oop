#include"checkingAccount.h"
#include"savingAccount.h"
#include"bankAccount.h"
#include<string>
#include<fstream>
class record{

    bankAccount *B[4];

    public:
    void ReadData();
    void DisplayData();
    void CheckBalance();
    void withdrawAmount();
    void depositAmount();
    void FindByAccountNO();
    void UpdateInfo();
    void writeData();



};