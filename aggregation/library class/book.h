#include<iostream>
#include<string>
using namespace std;

class book{
    private:
    int bookId;
    int personId;
    string title;
    char status;
    public:
    void getInfo();
    void display();
    int getbookId()
    { return bookId;
    }
    int getperId()
    { return personId;
     }
    string getBookTitle()
    { return title;
    }
    char getbookStatus()
    { return status;
    } 


};
