#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

class Customer {
private:
    string name;
    Vehicle** bought;
    int size, capacity;
public:
    Customer(string name);
    string getName() const;
    void buyVehicle(Vehicle* v);
    void boughtList() const;
    void comparePrice(Vehicle* v1, Vehicle* v2);
    Vehicle* getBought(int) const;
    int getSize();
    ~Customer();
};
