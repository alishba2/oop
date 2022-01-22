#include<iostream>
#include<string>
#include"room.h"
using namespace std;

void room::InformationOfPerson(){

        P.GET();
    
}

void room :: ReadInfo(){
    cout<<"Enter room number: ";
    cin >>  room_number;
    cout<< "Enter  F for free and N for reserved ";
    cin >> status_of_room;
    if(status_of_room == 'N'){
        InformationOfPerson();
    }
    
    

}
void room  :: DisplayInfo(){
    
    
         if(status_of_room == 'N'){
              cout<<" room number : "<<endl<<room_number<<endl<<"status of room: "<<status_of_room<<"Information of a person: "<<endl;
          P.SHOW();

    }
        if(status_of_room=='F'){
              cout<<" room number : "<<room_number<<endl<<"status of room: "<<status_of_room<<"Information of a person: nill"<<endl;
        
        }

}
int room ::SearchById(int r){
    if(r==P.tellId()){
        
        return true;
    }
 
}

