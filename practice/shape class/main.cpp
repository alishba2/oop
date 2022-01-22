#include"shape.h"
#include "rectangle.h"
#include"circle.h"
#include<fstream>
#include<iostream>
using namespace std;

int main(){
    string s1,s2,s3;
    shape *S[4];
    ifstream ifile("data.txt");
    for(int i=0; i<4; i++){

        getline(ifile,s1,',');
        getline(ifile,s2,',');
        getline(ifile,s3,',');

        if(s1 == "C"){
            S[i] = new circle(stoi(s2));
        }
        else{
            S[i] = new rectangle(stoi(s2), stoi(s3));
        }


        
        
    }



    

}