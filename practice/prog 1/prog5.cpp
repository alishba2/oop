#include<iostream>
using namespace std;
#include<fstream>
 class anexp{

 };
class customerOrder {
    int orderNumber;
    int quantity;
    float price;
    float total;

    public:
    customerOrder(){
        orderNumber = 0;
        quantity=0;
        price=0;
        total = 0;
    }
    customerOrder(int o , int q ,float p , float t){
        orderNumber = o;
        quantity = q;
        price = p; 
        total =t;
    }

    void get(){
        cout<<"ENTER ORDER NUMBER: "<<endl;
        cin >> orderNumber;
        cout<<"ENTER QUANTITY: "<<endl;
        cin>>quantity;
        cout<<"ENTER PRICE: "<<endl;
        cin>>price;
        total = quantity * price;

        try{
            if(orderNumber >999){
                throw anexp();
            }
        }
        catch(anexp){
            cout<<"EXCEPTION: DUE TO ORDER NUMBER"<<endl;
        }
        try{
            if(quantity>50){
                throw anexp();
            }
        }
        catch (anexp){
            cout<<"EXCETPTION: DUE TO QUANTITY"<<endl;
        }
        try{
            if(price>39.95){
                throw anexp();
            }
        }
        catch (anexp){
            cout<<"EXCEPTION: DUE TO PRICE"<<endl;
        }

        try{
            if(total > 1000){
                throw anexp();
            }
        }
        catch (anexp){
            cout<<"EXCEPTION : DUE TO TOTAL"<<endl;
        }
     }

    void writeData(){
    ofstream ofile;
    ofile.open("output.txt");
    for(int i=0 ;i<4 ;i++){
         ofile<<"ORDER NO: "<<orderNumber<<endl;
         ofile<<"QUANTITY: "<<quantity<<endl;
         ofile<<"PRICE: "<<price<<endl;
         ofile<<"TOTAL: "<<total<<endl;
    }
  
    ofile.close();

}

};

int main(){

    customerOrder C[5];
    for(int i=0; i<5; i++ ){
        C[i].get();
    }

      for(int i=0; i<5; i++ ){
        C[i].writeData();
    }
    
    return 0;

}