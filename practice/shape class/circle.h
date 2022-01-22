#include"shape.h"

class circle : public shape{
    int radius;

    public:
    circle(){
        radius = 0;
    }
    void display();
    void calculateArea();
    
};