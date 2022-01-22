#include<string>
#include"book.h"

class writer{

    book B[2];

    private:
    string name;
    int noOfBooks;

    public:
    void ReadInfo();
    void DisplayInfo();
    bool FindBook(string T);
    string TellName(){
        return name;
    }

};