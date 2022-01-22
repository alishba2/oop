#include<iostream>
#include<string>
#include"hotel.h"
using namespace std;

void hotel :: Read(){
    for(int i=0; i<5; i++){
        R[i].ReadInfo();
    }
}

void hotel :: Display(){
    for(int i=0; i<5; i++){
        R[i].DisplayInfo();
    }
}
// int hotel :: IfAvailable(int A){
    
    
//     for(int i=0; i<5;i++){
//         if(A == R[i].available_room()){
           
//             return R[i].available_room();
            
//         }
//     }
    
        
    //    for(int i=1; i<5 ;i++){
    //        if(A == R[i].available_room()){
    //            return R[i].available_room();
               
    //        }

    //    }
    // }
    
    // bool found = false;
    // int pos = 0;

    // for(int i=0; i<5&&found==false; i++){
    //     if(A == R[i].available_room()){
    //         pos = i;
    //         found = true;
           
            
            
    //     }

    // }
    // if(found == false){
    //     pos = 0;
    //     cout<<"room available"<<endl;
        


//     }
//     return pos;
//  }
// int hotel ::bookRoom(int r){
//     bool found = true;
//         if(IfAvailable(r) == 0){
//             found = false;
//             R[r].personData();
            

//         }
//     if(found=true){
//         cout<<"Your entered room is not available "<<endl;
//     }
    

// }

int hotel::checkout(int A){
    int pos = 0;
    for(int i=0; i<5; i++){
        if(R[A].tellroom()==R[i].tellroom()){
            pos = i;
            int a = R[i].StatusOfRoom();
            if(a=='N'){
                // R[pos].StatusOfRoom() == 'F';
                cout<<R[a].StatusOfRoom();
                cout<<"checked out";
                
            }
        
              
            }
            
        }
        cout<<"checked out!"<<endl;
    
    }


int hotel ::IfAvailable(int roomNO){
    bool found = false;
    int pos =0;
    char a = 'F';
    char b= 'F';
    for(int i=0; i<5; i++){
        
        
        if(R[roomNO].tellroom()==R[i].tellroom()){
            pos = i;
            a = R[i].StatusOfRoom();
            if(a=='N'){
                // cout<<"room reseved";
                found == true;
                return found;
                
            }
            

        }
    
      
      
    }
    if(found==false){
       return found;
    }
    return found;

}

int hotel::bookRoom(int room){
    int r;
    if(IfAvailable(room)==false){
        
    
        cout<<"room available"<<endl;
        
        R[room].InformationOfPerson();
        

        
    }
    else if(IfAvailable(room)==true){
        cout<<"This room is reserved";
    }
}

// int hotel::checkout(int room){
//     int r;
//     int pos;
 
//     if(IfAvailable(room)==true){
//         for(int i=0; i<5; i++){
//             cout<<"hello";
//           if(R[room].tellroom()==R[i].tellroom()){
//             pos = i;
//             r = R[i].StatusOfRoom();
//             if(r=='N'){
//                 r = 'F';
//         }
//     }
//     }
//     cout<<"status of room"<<R[room].StatusOfRoom();
    
    
// }
// }
int hotel ::Findbyidofperson(int p){
    int pos = 0;
    for(int i=0; i<5; i++){

        if(R[i].SearchById(p)==true){
            pos = i;
        }
     


    }
    cout<<"Information of a person searched by ID"<<endl;
    R[pos].DisplayInfo();
   

}
int hotel::FreeRooms(){
    for(int i=0; i<5;i++){
        if(R[i].StatusOfRoom()=='F'){
            cout<<"Room no :"<<R[i].tellroom()<<" is Empty Room"<<endl;
        }
    }
}