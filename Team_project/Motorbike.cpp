#include "Motorbike.h"

string Motorbike::getEnType()
{
    return this->engineType;
}

double Motorbike::getSpeed()
{
    return this->maxSpeed;
}

void Motorbike::setEnType(string engineType)
{
    this->engineType = engineType;
}

void Motorbike::setSpeed(double maxSpeed)
{
    this->maxSpeed = maxSpeed;
}

void Motorbike::fuelConsumption()
{
    cout << "Very low consumption !!!" << endl;
}

void Motorbike::displayInf()
{
    cout << "Bike's information: " << this->getBrand() << " " << this->getModel() << " " << this->getPrice() << " " << engineType << endl;
}

Motorbike::~Motorbike()
{
}
