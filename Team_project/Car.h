#pragma once
#include "Vehicle.h"

class Car : public Vehicle
{
private:
	string color;
	int numSeat;
public:
	Car() : Vehicle(), color(""), numSeat(0) {};
	Car(string brand, string model , double price, string color, int numSeat) : Vehicle(brand, model, price), color(color), numSeat(numSeat){}
	string getColor();
	int getNumSeat();
	void setColor(string);
	void setNumSeat(int);
	void fuelConsumption() override;
	void displayInf() override;
	friend ostream& operator << (ostream&, Car&);
	~Car() override;
};

