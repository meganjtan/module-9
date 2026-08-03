// Megan Tan
// CIS 1202 801
// Aug 3, 2026
// Module 9 - Inheritance
// Class Specification File - Car

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h" //child of Vehicle class
using namespace std;

class Car : public Vehicle { //child of Vehicle class
    private:
        int doors;

    public: 
        int getDoors();
        void setDoors(int doors);
        void displayInfo() override;
};

#endif