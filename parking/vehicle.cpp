#include "vehicle.h"
#include<iostream>
using namespace std;

void Vehicle::getinfo()
{
	cout<<"\nEnter Name: ";
	cin>>name;
	cout<<"\nEnter type: ";
	cin>>type;
	cout<<"\nEnter hours: ";
	cin>>hr;
	cout<<"\nEnter Reg No: ";
	cin>>id;
}
void Vehicle::showinfo()
{
	cout<<"\nName: "<<name<<"\nReg No: "<<id<<"\nType: "<<type<<endl;
}
int Vehicle::returnreg()
{
	return id;
}
int Vehicle::returnhr()
{
	return hr;
}
string Vehicle::returntype()
{
	return type;
}
