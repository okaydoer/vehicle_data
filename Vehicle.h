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

class Car : public Vehicle {
private:
	int doors;
	
public:
	Car(string, int, int);
	
	int getDoors();
	void setDoors(int);
	
	void displayInfo();
};

class Truck : public Vehicle {
private:
	double tow;
	
public:
	Truck(string, int, double);
	
	double getTow();
	void setTow(double);
	
	void displayInfo();
};

