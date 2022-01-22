#include<iostream>
#include<string>
#include"person.h"

class room {
  private:
  person P;
  int room_number; 
  char status_of_room;
  int person_in_room;
 
  public:
  // void personData();
  void ReadInfo();
  void DisplayInfo();
  void InformationOfPerson();
  char StatusOfRoom(){
    return status_of_room;
  }
  void updateStatus(int id);
  int tellroom(){
    return room_number;
  }
  int SearchById(int p);
  
  
};