#include<iostream>
using namespace std;
#include<string>

// class count{

//     private:
//     int value;

//     public:
//     count(){
//         value = 10;
//     }
//     count operator ++(){
//         count temp;
//         temp.value = ++value;
//         return temp;
//     }
//     count operator ++(int){
//         count temp;
//         temp.value = value++;
//         return temp;
//     }
//     void display(){
//         cout<<"count is : "<<value;
//     }

// };
// int main(){
//     count c1;
//     ++c1;
//     c1.display();
//     c1++;
//     c1.display();
//     return 0;
// }


// C++ program to demonstrate the use of class templates

// #include <iostream>
// using namespace std;

// // Class template
// template <class T>
// class Number {
//    private:
//     // Variable of type T
//     T num;

//    public:
//     Number(T n) : num(n) {}   // constructor

//     T getNum() {
//         return num;
//     }
// };

// int main() {

//     // create object with int type
//     Number<int> numberInt(7);

//     // create object with double type
//     Number<double> numberDouble(7.7);

//     cout << "int Number = " << numberInt.getNum() << endl;
//     cout << "double Number = " << numberDouble.getNum() << endl;

//     return 0;
// }


// SIMPLE TEMPLATE FUNCTION

// template <class T>
// void sum(T a , T b){
//     T c;
//     c = a + b;
//     cout<<"YOU FAVE ME "<<a <<"and"<<b<<".\n";
//     cout<<"RESULT: "<<c<<"."<<endl;
// }
// int main(){
//     string s1 = "oh";
//     string s2 = "no";
//     sum(1,2);
//     sum(0.1 , 0.4);
//     sum(s1 ,s2);
//     return 0;
// }

// USING MULTIPLE PARAMETERS

// template<class T>
// T findLargest(T x, T y){
//     T big;
//     if(x > y){
//         big = x;

//     }
//     else{
//         big = y;
//     }
//     return big;
// }
// int main(){
//     int a;
//     double b;
//     a = findLargest(3,6);
//     b= findLargest(9.9 , 6.7);
//     cout<<a<<endl;
//     cout<<b;
// }