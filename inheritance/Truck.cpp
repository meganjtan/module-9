// Megan Tan
// CIS 1202 801
// Aug 3, 2026
// Module 9 - Inheritance
// Class Implementation File - Truck

#include "Truck.h"
#include <iostream>
using namespace std;

void Truck::displayInfo(){ //overriding vehicle displayInfo()
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << endl;
}

int Truck::getTowingCapacity(){
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity){
    this->towingCapacity = towingCapacity;
}