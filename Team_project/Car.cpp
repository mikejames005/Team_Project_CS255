#include "Car.h"

string Car::getColor()
{
	return this->color;
}

int Car::getNumSeat()
{
	return this->numSeat;
}

void Car::setColor(string color)
{
	this->color = color;
}

void Car::setNumSeat(int numSeat)
{
	this->numSeat = numSeat;
}

void Car::fuelConsumption()
{
	cout << "Low consumption!!!" << endl;
}

void Car::displayInf()
{
	cout << "Car's information: " << this->getBrand() << " " << this->getModel() << " " << this->getPrice() << " " << color << endl;
}
