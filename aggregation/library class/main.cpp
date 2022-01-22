#include<iostream>
#include<string>
#include"list.h"
using namespace std;

int main(){
    list l1;

   

    int choice;

    char ch = 'Y';
    
    do{
            cout<<"WELCOME TO LIBRARY MANAGEMENT SYSTEM"<<endl;

        cout<<"Enter 1 to to Add info"<<endl<<"Enter 2 to Issue book"<<endl<<"Enter 3 to Return booutok"<<endl<<"Enter 4 to Find book info"<<endl<<"Enter 5 to Display all the reserved books"<<endl;
        cin>> choice;

        if(choice == 1){
            cout<<"**********************************************************"<<endl;
            cout<<"--------Adding information of student and books-----"<<endl;
            l1.add();
              cout<<"**********************************************************"<<endl;
        }
        else if(choice == 2){
              cout<<"**********************************************************"<<endl;
              cout<<"-----ISSUING BOOK-----------------"<<endl;
            l1.issue();
              cout<<"**********************************************************"<<endl;
        }
        else if(choice==3){
              cout<<"**********************************************************"<<endl;
              cout<<"--------Returning book---------"<<endl;
            l1.returnBook();
              cout<<"**********************************************************"<<endl;
        }
        else if(choice==4){
              cout<<"**********************************************************"<<endl;
              cout<<"----------Finding Book-------------"<<endl;
            l1.Find();
              cout<<"**********************************************************"<<endl;
        }
        else if(choice == 5){
              cout<<"**********************************************************"<<endl;
              cout<<"------------Reserved Books-----------"<<endl;
              
            l1.ReservedBooks();
              cout<<"**********************************************************"<<endl;
        }
    cout<<"Enter Y to continue and N to exit";
    cin>>ch;
        



    }while(ch != 'N');

}