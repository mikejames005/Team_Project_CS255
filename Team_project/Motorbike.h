#pragma once
#include "Vehicle.h"

class Motorbike : public Vehicle
{
private:
	string engineType;
	double maxSpeed;
public:
	Motorbike() : Vehicle(), engineType(""), maxSpeed(0){}
	Motorbike(string brand, string model, double price, string EnType, double MaxS) : Vehicle(brand, model, price), engineType(EnType), maxSpeed(MaxS){}
	string getEnType();
	double getSpeed();
	void setEnType(string);
	void setSpeed(double);
	void fuelConsumption() override;
	void displayInf() override;
	friend ostream& operator << (ostream&, Motorbike&);
	~Motorbike();
};

