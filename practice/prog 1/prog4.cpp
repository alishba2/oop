#include<iostream>
using namespace std;
class anexp{
    int s;
    public:
    anexp(int n){
        n = 0;
    };
    void display(int n){
        cout<<"Exception occured due to"<<n<<endl;
    }

};
class inventory{
    int stockNumbers;
    int quantity;
    float price;


    public:
    inventory(){
        stockNumbers = 0;
        quantity = 0;
        price = 0;

    }
    void get(){
        cout<<"Enter stockNumbers: "<<endl;
        cin>>stockNumbers;
        cout<<"Enter quantity:"<<endl;
        cin >> quantity;
        cout<<"Enter price: "<<endl;
        cin >> price;
        try{
            if(stockNumbers<0 || stockNumbers>999){
                throw anexp(stockNumbers);
            }
        }
        catch(anexp e){
            e.display(stockNumbers);
            cout<<"EXCETION: DUE TO STOCKNUNBERS"<<endl;

        }
        try{
            if(quantity<0){
                throw anexp(quantity);
            }
        }
        catch (anexp e){
            cout<<"EXCEPTION: DUE TO QUANTITY"<<endl;
            e.display(quantity);
        }
        try{
            if(price>100){
                throw anexp(price);
            }
        }
        catch(anexp e){
            cout<<"EXCEPTION: DUE TO PRICE"<<endl;
            e.display(price);
        }

    }
    void show(){
        cout<<"STOCK NUMBERS : "<<stockNumbers<<endl;
        cout<<"QUANTITY: "<<quantity;
        cout<<"PRICE: "<<price;
    }

};

int main(){
    inventory I[5];

    for(int i=0; i<5; i++){
        I[i].get();
    }

    for(int i=0; i<5; i++){
        I[i].show();
    }
    return 0;
}