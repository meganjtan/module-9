// Megan Tan
// CIS 1202 801
// Aug 3, 2026
// Module 9 - Inheritance
// Class Implementation File - Vehicle

#include "Vehicle.h"
#include <iostream>
using namespace std;

string Vehicle::getManufacturer(){
    return manufacturer;    
}

int Vehicle::getYear(){
    return year;
}

void Vehicle::setManufacturer(string manufacturer){
    this->manufacturer = manufacturer;
}

void Vehicle::setYear(int year){
    this->year = year;


}

void Vehicle::displayInfo(){
    cout << "Vehicle Information: " << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << year << endl;
}