// Vehicle.cpp

#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(string m, int y) {
	setManufacturer(m);
	setYear(y);
};

string Vehicle::getManufacturer() { return manufacturer; }
int Vehicle::getYear() { return year; }
void Vehicle::setManufacturer(string m) { manufacturer = m; }
void Vehicle::setYear(int y) { year = y; }

void Vehicle::displayInfo(){
	cout << "Vehicle information: " << endl;
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year built: " << year << endl;
};



