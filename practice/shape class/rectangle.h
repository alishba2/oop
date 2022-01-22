#include"shape.h"

class rectangle : public shape {

    int l , b;

    public:
    
    rectangle(){
        l = 0;
        b = 0;
    }
    void display();

};