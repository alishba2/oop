#include<iostream>
#include<string>
#include"room.h"


class hotel{
    room R[5];
    
    public:
    void Read();
    void Display();
    int IfAvailable(int A);
    int bookRoom(int R);
    int checkout(int r);
    int Findbyidofperson(int p);
    int FreeRooms();

};