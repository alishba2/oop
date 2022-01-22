#include<string>
using namespace std; 
#include"writer.h"

class list{
    writer W[3];
    
    public:
    void Read();
    void Show();
    string FindByName(string N);
    string FindByTitle(string T);
};