// Derek Gad
// CIS 1202.501
// April 26, 2026
// main

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
#include <string>

int main()
{
	cout << "Vehicle Program: " << endl << endl;
	
	// vehicle
	string manufacturer;
	int year;
	
	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cin.ignore();
	
	Vehicle v(manufacturer, year);
	v.displayInfo();
	cout << endl;
	//
	
	// car
	int doors;
	cout << "Car:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;
	cin.ignore();
	
	Car c(manufacturer, year, doors);
	c.displayInfo();
	cout << endl;
	//
	
	// truck
	double tow;
	
	cout << "Truck:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter towing capacity in lbs: ";
	cin >> tow;
	
	Truck t(manufacturer, year, tow);
	t.displayInfo();
	cout << endl;
	//
	
	return 0;
}

