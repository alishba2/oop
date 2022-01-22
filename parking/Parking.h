#pragma once
#include"Parkingslot.h"
class Parking
{
private:
	Parkingslot p[5];
	int total;
public:
	Parking();
	void getinfo();
	void showinfo();
	void parking();
	void find();
	void leave();
	void totalbill();

};