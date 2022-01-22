#include<iostream>
using namespace std;

class add{

    private:
    int val1;
    int val2;
    public:
    add(){
        val1 = 2;
        val2 = 4;
    }
    void input(){
        cout<<"Enter value 1: "<<endl;
        cin >> val1;
        cout<<"Enter value 2: "<<endl;
        cin >> val2;
    }
    add operator +(const add val){
        add temp;
        temp.val1 = val1 + val.val1;
        temp.val2 = val2 + val.val2;
        return temp;

    }
void display(){
    cout<<"addition is"<<val1 <<"+"<<val2;
}
   

};
int main(){
    add ad1, ad2 ,ad3;
    ad1.input();
    ad2.input();
    ad3 = ad1 + ad2;
    ad3.display();
    
}