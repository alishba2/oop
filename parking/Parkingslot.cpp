#include "Parkingslot.h"
#include"vehicle.h"
int Parkingslot::num=200;
void Parkingslot::getinfo()
{
	v.getinfo();
}
void Parkingslot::showinfo()
{
	v.showinfo();
}
char Parkingslot::returnstatus()
{
	return status;
}
void Parkingslot::changestatus()
{
	status='R';
}
int Parkingslot::returnreg()
{
	int h;
	h=v.returnreg();
	return h;
}
int Parkingslot::returnhr()
{
	int g;
	g=v.returnhr();
	return g;
}
string Parkingslot::returntype()
{
	string w;
	w=v.returntype();
	return w;
}
void Parkingslot::change()
{
	status='F';
}
int Parkingslot::freelot()
{
	return freeslot;
}