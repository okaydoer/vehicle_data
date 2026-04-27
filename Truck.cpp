// Truck.cpp

#include "Truck.h"
#include <iostream>

Truck::Truck(string m, int y, double t) : Vehicle(m, y) {
	setTow(t);
};

double Truck::getTow() { return tow; }
void Truck::setTow(double t) { tow = t; }

void Truck::displayInfo(){
	Vehicle::displayInfo();
	cout << "Towing capacity: " << tow << endl;
};
