// Megan Tan
// CIS 1202 801
// Aug 3, 2026
// Module 9 - Inheritance
// Class Implementation File

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
using namespace std;

class Car : public Vehicle {
    private:
        int doors;

    public: 
        int getDoors();
        void setDoors(int doors);
        void displayInfo() override;
};

#endif