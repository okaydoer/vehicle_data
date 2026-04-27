// Car.cpp

#include "Car.h"
#include <iostream>

Car::Car(string m, int y, int d) : Vehicle(m, y) {
	setDoors(d);
};

int Car::getDoors() { return doors; }
void Car::setDoors(int d) { doors = d; }

void Car::displayInfo(){
	Vehicle::displayInfo();
	cout << "Number of doors: " << doors << endl;
};
