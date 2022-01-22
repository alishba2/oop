#include<iostream>
#include"Parking.h"
using namespace std;

int main()
{
	Parking p;
	p.getinfo();
	p.showinfo();
	int choice;
	cout<<"\nParking system::::::::)";
	do
	{
		cout<<"\nSelect::\n1-Parking::\n2-Leave::\n3-Find::\n4-Total bill::\n5-Exit::\nEnter: ";
		cin>>choice;
		if(choice==1)
			p.parking();
		if(choice==2)
			p.leave();
		if(choice==3)
			p.find();
		if(choice==4)
			p.totalbill();
	cout<<"\nWanna continue: 5 to continue";
	
	}
	while(choice!=5);
	cout<<"\nFair well::::::::::::::::::::)";
	
}