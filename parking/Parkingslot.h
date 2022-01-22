#pragma once
#include"vehicle.h"
class Parkingslot
{
private:
	Vehicle v;
	int freeslot;
	char status;
	static int num;
public:
	Parkingslot()
	{
		num=num+1;
		freeslot=num;
		status='F';
	};
	void getinfo();
	void showinfo();
	char returnstatus();
	void changestatus();
	int returnreg();
	int returnhr();
	string returntype();
	void change();
	int freelot();

};
