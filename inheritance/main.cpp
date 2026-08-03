// Megan Tan
// CIS 1202 801
// Aug 3, 2026
// Module 9 - Inheritance
// Main

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int inputValidation(int input);

int main(){
    string manufacturer;
    int year;
    int doors;
    int towing;

    cout << "Vehicle Program" << endl;
    cout << endl;

    //testing Vehicle class
    Vehicle vehicle;
    cout <<"Vehicle: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    year = inputValidation(year);
    vehicle.setManufacturer(manufacturer);
    vehicle.setYear(year);
    vehicle.displayInfo();
    cout << endl;

    //testing Car class
    Car car;
    cout <<"Car: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    year = inputValidation(year);
    cout << "Enter the number of doors: ";
    doors = inputValidation(doors);
    car.setManufacturer(manufacturer);
    car.setYear(year);
    car.setDoors(doors);
    car.displayInfo();
    cout << endl;

    //testing Truck class
    Truck truck;
    cout <<"Truck: " << endl;
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    year = inputValidation(year);
    cout << "Enter the towing capacity: ";
    towing = inputValidation(towing);
    truck.setManufacturer(manufacturer);
    truck.setYear(year);
    truck.setTowingCapacity(towing);
    truck.displayInfo();
    cout << endl;
}

int inputValidation(int input){
    bool validInput;

    do{ //input validation
        if (!(cin >> input) || cin.fail()){ //valid: an integer
            cout << "Input error. Try again (#no.): ";
            cin.clear(); //clears entry failure flag
            cin.ignore(10, '\n'); //ignores 10 digits from keyboard buffer
            validInput = false;
        } else{
            validInput = true;
        }
    } while(!validInput); //loops until a valid entry
    
    cin.ignore();
    return input; //returns the user's menu choice
}