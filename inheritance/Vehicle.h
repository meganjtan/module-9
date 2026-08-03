// Megan Tan
// CIS 1202 801
// Aug 3, 2026
// Module 9 - Inheritance
// Class Specification File

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle{
    private:
        string manufacturer;
        int year;

    public:
        string getManufacturer();
        int getYear();
        void setYear(int year);
        void setManufacturer(string manufacturer);
        void displayInfo();
};

#endif