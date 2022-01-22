#include"book.h"
#include<string>
using namespace std;

class writer{
    book B[3];
    private:
    string name;
    int no_of_books;

    public:
    void ReadInfo();
    void DisplayInfo();
    string Tell_name(){
        return name;
    }
    bool FindBook(string T);
    

};