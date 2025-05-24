#pragma once
#include <iostream>
#include "Vehicle.h"
#include <string>
using namespace std;

class GarageOwner {
private:
    string name;
    int size; // number of vehicles
public:
    Vehicle** vehicles; // pointer to pointer to store vehicles in Vehicle 
    GarageOwner(string, int);
    string getName() const;
    void addVehicles(Vehicle* v); // add vehicle pointer to the list
    void showGarage() const;
    Vehicle* sellVehicle(int index); // point to where to delete
    int getVehicleCount(); // check if Garage is empty or notnot
    ~GarageOwner(); // clear memories
};
