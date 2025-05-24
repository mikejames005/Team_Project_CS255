#include "truck.h"
#include <iostream>
using namespace std;

void Truck::fuelConsumption() {
    cout << "[Truck] Fuel is low\n";
}

void Truck::displayInf() {
    cout << "Truck's information: " << this->getBrand() << " " << this->getModel() << " " << this->getPrice() << " " << maxLoadCapacity << " " << lengthbase << endl;
}

Truck::~Truck() {
    
}

ostream& operator<<(ostream& os, Truck& truck)
{
	os << "The brand: " << truck.getBrand() << endl;
	os << "The model: " << truck.getModel() << endl;
	os << "The price: " << truck.getPrice() << endl;
	os << "The color: " << truck.maxLoadCapacity << endl;
	os << "Number of seats: " << truck.lengthbase << endl;
	return os;
}
