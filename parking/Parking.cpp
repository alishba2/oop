#include "Parking.h"
#include"Parkingslot.h"
Parking::Parking()
{
	total=0;
}
void Parking::getinfo()
{
	for(int i=0;i<5;i++)
	{
		p[i].getinfo();
	}
}
void Parking::showinfo()
{
	for(int i=0;i<5;i++)
	{
		p[i].showinfo();
	}
}
void Parking::parking()
{
	bool a=false;
	for(int i=0;i<5;i++)
	{
		if(p[i].returnstatus()=='F')
		{
			a=true;
			p[i].changestatus();
			p[i].getinfo();
			cout<<"\nParking slot: "<<p[i].freelot();
			break;
		}
	}
	if(a==false)
		cout<<"\nSorry no free spot::::::(";
}
void Parking::leave()
{
	int regno;
	string a;
	int hr;
	int bill;
	cout<<"\nEnter Reg No off car: ";
	cin>>regno;
for(int i=0;i<5;i++)
{
	if(regno==p[i].returnreg())
	{
		p[i].change();
		a=p[i].returntype();
		hr=p[i].returnhr();
		if(a=="bus")
		{
			bill=30*hr;
		}
		if(a=="bike")
		{
			bill=10*hr;
		}
		if(a=="car")
		{
			bill=20*hr;
		}
		break;
	}
}
total=total+bill;
cout<<"\nTotal bill= "<<bill;
}
void Parking::find()
{
	int reg;
	cout<<"\nEnter vehicle's Reg No: ";
	cin>>reg;
	bool a=false;
	for(int i=0;i<5;i++)
	{
		if(reg==p[i].returnreg())
		{
			if(p[i].returnstatus()=='R')
			{
			p[i].showinfo();
			a=true;
			}
		}
	}
	if(a==false)
		cout<<"\nSorry Vehicle not found:(";
}
void Parking::totalbill()
{
	cout<<"\nTotal amount collected= ";
	cout<<total;
}



		