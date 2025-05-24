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
    cout << name <<"bought: ";
    v->displayInf();
    // same thing with garage owner cpp
}

void Customer::boughtList() const {
    cout << name << "'s purchased vehicles (" << size << "):" << endl;
    if (size == 0) {
        cout << "  [None]" << endl;
        return;
    }
    for (int i = 0; i < size; ++i) {
        cout << "  [" << i << "] ";
        bought[i]->displayInf();
        cout << endl;
    }
}

void Customer::comparePrice(Vehicle* v1, Vehicle* v2) {
    if (!v1 || !v2) return;
    cout << "Comparing prices:\n";
    if (v1 < v2) {
        cout << "  " << v1->getModel() << " is cheaper than " << v2->getModel() << endl;
    } else if (v1 > v2) {
        cout << "  " << v1->getModel() << " is more expensive than " << v2->getModel() << endl;
    } else {
        cout << "  Both have the same price." << endl;
    }
}

Vehicle* Customer::getBought(int index) const {
    if (index < 0 || index >= size) return nullptr;
    return bought[index];
}

int Customer::getSize()
{
    return this->size;
}

Customer::~Customer(){
    delete[] bought;
}
