// Megan Tan
// CIS 1202 801
// Aug 3, 2026
// Module 9 - Inheritance
// Class Implementation File

#include "Car.h"
using namespace std;

int Car::getDoors(){
    return doors;
}

void Car::setDoors(int doors){
    this->doors = doors;
}

void Car::displayInfo(){
    Vehicle::displayInfo();
    cout << "Doors: " << doors << endl;
}