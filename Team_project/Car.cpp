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

Car::~Car()
{
}

ostream& operator<<(ostream& os, Car& car)
{
	os << "The brand: " << car.getBrand() << endl;
	os << "The model: " << car.getModel() << endl;
	os << "The price: " << car.getPrice() << endl;
	os << "The color: " << car.color << endl;
	os << "Number of seats: " << car.numSeat << endl;
	return os;
}
