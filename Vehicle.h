// Vehicle.h

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle {
private:
	string manufacturer;
	int year;
	
public:
	Vehicle(string, int);
	
	string getManufacturer();
	void setManufacturer(string);
	int getYear();
	void setYear(int);
	
	void displayInfo();
};

#endif
