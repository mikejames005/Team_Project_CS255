#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;

Customer::Customer(string name) {
    this->name = name;
    this->size = 0;
    this->capacity = 10;
    this->bought = new Vehicle * [capacity];
}
string Customer::getName() const {
    return name;
}
void Customer::buyVehicle(Vehicle* v) {
    // check valid 
    if (v == nullptr) {
        cout << "Invalid" << endl;
        return;
    }
    // same with garage owner
    if (size >= capacity) {
        capacity *= 2;
        Vehicle** newArray = new Vehicle * [capacity];
        for (int i = 0; i < size; i++) {
            newArray[i] = bought[i];
        }
        delete[] bought;
        bought = newArray;
    }
    bought[size] = v;
    size++;
    // same thing with garage owner cpp
}