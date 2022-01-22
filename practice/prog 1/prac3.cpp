#include<iostream>
using namespace std;

template<class T>
T increase(T arg1 , int arg2=4){

    return arg1 + arg2;

}
int main(){
    cout<<increase<int>(4);
    cout<<endl;
    cout<<increase<double>(3.2);
}