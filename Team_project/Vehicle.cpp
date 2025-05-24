#include "Vehicle.h"

Vehicle::Vehicle()
{
	this->price = 0;
	this->brand = "";
	this->model = "";
}

Vehicle::Vehicle(string brand, string model, double price)
{
	this->brand = brand;
	this->model = model;
	this->price = price;
}

string Vehicle::getBrand()
{
	return this->brand;
}

string Vehicle::getModel()
{
	return this->model;
}

double Vehicle::getPrice()
{
	return this->price;
}

void Vehicle::setBrand(string b)
{
	this->brand = b;
}

void Vehicle::setModel(string m)
{
	this->model = m;
}

void Vehicle::setPrice(double g)
{
	this->price = g;
}

void Vehicle::fuelConsumption()
{
}

void Vehicle::displayInf()
{
	cout <<"Vehicle's Information:" << brand << " " << model << " " << price << endl;
}

bool Vehicle::operator<(const Vehicle& p) const
{
	if (this->price < p.price) {
		return true;
	}
	return false;
}

bool Vehicle::operator>(const Vehicle& q) const
{
	return this->price > q.price;
}

bool Vehicle::operator=(const Vehicle& r) const
{
	if (this->price == r.price) {
		return true;
	}
	return false;
}

bool Vehicle::operator<(double budget) const
{
	if (this->price < budget) {
		return true;
	}
	return false;
}

Vehicle::~Vehicle()
{
}

