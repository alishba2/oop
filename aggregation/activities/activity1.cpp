#include <iostream>

using namespace std;

class tollbooth{
    private:
    int cars;
    int money;
    public:
    tollbooth(){
        cars = 0;
        money = 0;
    }
    public:
    void payingCar(){
        money = money+50;
        cars++;
    }
    void nonPayingCar(){
        cars++;
    }
    void display(){
        cout<< "Total Cars:"<<cars;
        cout<<"Total money: "<<money;
    }
    
    
};

int main()
{  
    tollbooth s1;
    
    int options;
    
    do{
        cout<< "Enter 1 if car is paying /n Enter 2 if car is not paying /n Enter 3 to display /n Enter 4 to exit";
        cin>> options;
        if (options == 1)
        s1.payingCar();
        else if (options == 2)
        s1.nonPayingCar();
        else if(options==3)
        s1.display();
        else return 0;

        
    }while(options !=4);
    return 0;
}
    
    