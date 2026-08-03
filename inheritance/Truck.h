// Megan Tan
// CIS 1202 801
// Aug 3, 2026
// Module 9 - Inheritance
// Class Specification File - Truck

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h" //child of Vehicle class
using namespace std;

class Truck : public Vehicle{ //child of Vehicle class
    private:
        int towingCapacity;
    public:
        int getTowingCapacity();
        void setTowingCapacity(int towingCapcity);
        void displayInfo() override; //override vehicle displayInfo()
};

#endif
