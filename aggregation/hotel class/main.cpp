#include<iostream>
#include<string>
#include"hotel.h"
using namespace std; 

int main(){
   int room;
    hotel h1;
    h1.Read();
  

    int choice;
    char ch = 'Y';
    int r;
   

    do{
        cout<<endl;

        cout<<"--------------MENUE OPTIONS--------------------"<<endl;
        cout<<"Enter 1 to book a room /n Enter 2 to check out from room /n Enter 3 Find person by ID card /n Enter 4 to Display room numbers of free room /n Enter 5 to display information of all rooms: "<<endl;
        cin >> choice;
        if(choice == 1){
            cout<<"************************************************************"<<endl;

            cout<<"BOOKING A ROOM"<<endl;
          
            cout<<"Enter room you want to book";
            cin>>r;
            h1.bookRoom(r);
        }
        
        else if(choice==2){
             cout<<"************************************************************"<<endl;

             cout<<"CHECKING OUT"<<endl;
            
            cout<<"Enter Your room number: ";
            cin>>r;
            h1.checkout(r);
        }
        else if(choice==3){
             cout<<"************************************************************"<<endl;

             cout<<"SEARCH BY ID"<<endl;
            
            cout<<"Enter Id of person"<<endl;
            cin >> r;
            h1.Findbyidofperson(r);
        }
        else if(choice == 4){
             cout<<"************************************************************"<<endl;

             cout<<"DISPLAYING FREE ROOM"<<endl;
            
            cout<<"Free rooms";
            h1.FreeRooms();
        }
        else if(choice==5){
             cout<<"************************************************************"<<endl;
             cout<<"DISPLAYING INFO OF ALL ROOMS"<<endl;
            
            cout<<"Information of all rooms:";
            h1.Display();
        }

        cout<<"Enter N to exit from the loop and Y to continue";
        cin >> ch;
        

    }while(ch != 'N');

    return 0;
}