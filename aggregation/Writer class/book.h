#include<string>
using namespace std;

class book{
    private:
    string title;
    int price;

    public:
    void Get();
    void Show();
    string tellTitle(){
        return title;
    }

};