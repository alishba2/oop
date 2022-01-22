#include<iostream>
#include<string>
using namespace std;
#include"writer.h"

void writer :: ReadInfo(){
    
    cout<<"Enter no of books: "<<endl;
    cin >> name;

    for(int i=0; i<=2 && i < n ; i++){
        B[i].Get();
    }
}

void writer ::DisplayInfo(){
    cout<<"NO of books written :"<<n;
    
    for(int i=0; i<=2&&i<n ; i++){
        B[i].Show();
    }
}

void writer :: FindBook() {
    for(int i=0; i<=2&&n ; i++){
        if(T==B[i].tellTitle();i++){
            return true;
        }
        return false;
    }
}

