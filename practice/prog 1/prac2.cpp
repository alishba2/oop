#include<iostream>
#include<string>
using namespace std;

template<class T>

class asteriks{

    public:
    void display(T A = "*"){
        for(int i=0 ;i<10;i++){
            cout <<A;
        }
    }

};
int main(){
    asteriks <int> t;
    t.display(1);
    asteriks <string> a;
    a.display();
}