#include "GarageOwner.h"
#include <iostream>
#include <string>
using namespace std;

GarageOwner::GarageOwner(string name, int size) {
    this->name = name;
    this->size = size; // current amount of vehicles
    this->vehicles = new Vehicle * [100];
}

string GarageOwner::getName() const {
    return this->name;
}

void GarageOwner::addVehicles(Vehicle* v) {
    vehicles[size] = v;
    size++;
}

void GarageOwner::showGarage() const {
    cout << "List of available vehicles" << endl;
    if (size == 0) {
        cout << "list is empty!" << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        cout << i << ". ";
        vehicles[i]->displayInf();
        // 1. xyz
    }
}
/* main idea for selling:
List of availble vehicles:
a
b
c

Enter which to buy:

Vehicle* vehicleBought = sellVehicle(choice)
*/
Vehicle* GarageOwner::sellVehicle(int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid" << endl;
        return nullptr;
    }
    Vehicle* vehicleSold = vehicles[index]; // sold vehicle assigned to an existing vehicle pointer
    for (int i = index; i < size - 1; i++) {
        vehicles[i] = vehicles[i + 1];
    }
    /* when removed, the list leaves empty hole, this is to fix that
    example:
    before:             after:
    0. A                vehicles 1 = vehicles 2
    1(sold). B -> empty  0. A | 1. C | 2. C | 3. D | 4. E
    2. C                vehicles 2 = vehicles 3
    3. D                0. A | 1. C | 2. D | 3. D | 4. E
    4. E.               last position
                        0. A | 1. C | 2. D | 3. E | 4. EMPTY
     */
     // clear empty space
    size--;
    return vehicleSold; // for Customer class to add to bought list
}

GarageOwner::~GarageOwner() {
    for (int i = 0; i < size; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
}