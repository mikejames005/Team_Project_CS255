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

ostream& operator<<(ostream& out, Motorbike& bike)
{
    out << "The brand: " << bike.getBrand() << endl;
    out << "The model: " << bike.getModel() << endl;
    out << "The price: " << bike.getPrice() << endl;
    out << "The color: " << bike.engineType << endl;
    out << "Number of seats: " << bike.maxSpeed << endl;
    return out;
}
