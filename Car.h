// Car.h

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : public Vehicle {
private:
	int doors;
	
public:
	Car(string, int, int);
	
	int getDoors();
	void setDoors(int);
	
	void displayInfo();
};

#endif
