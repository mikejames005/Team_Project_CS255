#pragma once
#include <iostream>
#include <string>

using namespace std;
class Vehicle
{
protected:
	string brand;
	double price;
	string model;
public:
	Vehicle();
	Vehicle(string, string, double);
	string getBrand();
	string getModel();
	double getPrice();
	void setBrand(string);
	void setModel(string);
	void setPrice(double);
	virtual void fuelConsumption();
	virtual void displayInf();
	bool operator < (const Vehicle&) const;
	bool operator > (const Vehicle&) const;
	bool operator = (const Vehicle&) const;
	bool operator < (double) const;
	virtual ~Vehicle();
};

