#include<string>
using namespace std;

class food{
    private:
    string Name;
    int Price ;
    int Quantity;

    public:
    void show();
    void Get();
    int Tell_Quaintity(){
        return Quantity;
    }
    string Tell_name(){
        return Name;
    }
    int tell_price(){
        return Price;
    }
    int updateQuantity(int Q);
  
    
};