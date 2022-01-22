#pragma once
#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
private:
	int id;
	string name;
	int hr;
	string type;
public:
	void getinfo();
	void showinfo();
	int returnreg();
	int returnhr();
	string returntype();
};