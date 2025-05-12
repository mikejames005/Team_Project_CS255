#pragma once
#include <iostream>
#include <string>

using namespace std;
class Vehicle
{
private:
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
	virtual void fuelConsumption() = 0;
	virtual void displayInf();
	bool operator < (const Vehicle&) const;
	bool operator > (const Vehicle&) const;
	bool operator = (const Vehicle&) const;
	friend ostream& operator << (ostream&, const Vehicle&);
	friend istream& operator >> (istream&, Vehicle&);
	virtual ~Vehicle();
};
