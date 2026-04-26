// Truck.h

#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck : public Vehicle {
private:
	double tow;
	
public:
	Truck(string, int, double);
	
	double getTow();
	void setTow(double);
	
	void displayInfo();
};

#endif
