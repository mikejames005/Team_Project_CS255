#include <iostream>
#include "Car.h"
#include "Vehicle.h"
#include "Motorbike.h"
#include "truck.h"
#include "Customer.h"
#include "GarageOwner.h"
#include <string>
using namespace std;
// Main function
int main() {
    GarageOwner owner("Nhóm 11", 0); 
    // Add vehicles to garage
    owner.addVehicles(new Car("Toyota", "Corolla", 20000.0, "Red", 7));
    owner.addVehicles(new Truck("Volvo", "FH16", 120000.0, 25000.0, 8.0));
    owner.addVehicles(new Motorbike("Yamaha", "R15", 1500.0, "150cc", 140.0));
    owner.addVehicles(new Car("Honda", "Civic", 22000.0, "Blue", 5));

    Customer cus("Nam");
   int choice;
    do {
        cout <<"Welcome to our Garage\n";
        cout << "1. Buy a vehicle\n";
        cout << "2. Find by budget\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;  
        cout << "---------------------------------------";
        cout << endl;

        // User want to buy vehiclevehicle
        if (choice == 1) {
            if (owner.getVehicleCount() == 0) {
                cout << "Garage is empty.\n";
                continue;
            }
            owner.showGarage();
            cout << "Enter the index of the vehicle to buy: ";
            int idx; cin >> idx;
            cout << endl;
            Vehicle* v = owner.sellVehicle(idx);
            cus.buyVehicle(v);
            cout << "\n--- Purchased List ---\n";
            cus.boughtList();
            cout << "---------------------------------------";
            cout << endl;
        }

        // User want to compare their vehicle's price
        else if (choice == 2) {
            cout << "enter your budget: $";
            double budget;
            cin >> budget;
            cout << "Vehicles fit your budget: \n" << endl;
            for (int j = 0; j < owner.getVehicleCount(); j++) {
                if (*owner.vehicles[j] < budget) {
                    owner.vehicles[j]->displayInf();
                }
                else {
                    cout << "Not exist!!!";
                    cout << "---------------------------------------" << endl;
                    break;
                }
            }
            cout << "---------------------------------------" << endl;

            /*cout << "\n--- Your Vehicles ---\n";
            cus.boughtList();
            cout << "Enter first vehicle index: "; int i, j;
            cin >> i;
            cout << "Enter second vehicle index: ";
            cin >> j;
            Vehicle* v1 = cus.getBought(i);
            Vehicle* v2 = cus.getBought(j);
            if (v1 && v2) {
                cout << "\n";
                cus.comparePrice(v1, v2);
                v1->fuelConsumption();
                v2->fuelConsumption();
            } else {
                cout << "Invalid indices.\n";
            }*/
        }       
    } while(choice != 3);

    cout << "Customer has bought: " << endl;
    for (int i = 0; i < cus.getSize(); i++) {
        cus.getBought(i)->displayInf();
    }

    return 0;
}
