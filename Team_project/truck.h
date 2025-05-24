#include <iostream>
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
    private:
        double maxLoadCapacity;
        double lengthbase;
    public: 
        // default constructor
        Truck () : Vehicle(), maxLoadCapacity(0), lengthbase(0) {};
        // Constructor
        Truck(string brand, string model , double price, double maxLoadCapacity, double lengthbase ) : Vehicle(brand, model, price), maxLoadCapacity(maxLoadCapacity), lengthbase(lengthbase) {};
        // Overiding Vehicle method
        void fuelConsumption() override;
        void displayInf() override;
        // DestructorDestructor
        ~Truck();
        friend ostream& operator <<(ostream&, Truck&);
};
