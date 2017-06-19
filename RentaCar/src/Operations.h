#ifndef OPERATIONS_H_
#define OPERATIONS_H_
#include <vector>
#include <iostream>
#include "Car.h"
#include "LuxuryCar.h"
#include "FamilyCar.h"

using namespace std;

class Operations {

public:

	Operations();
	virtual ~Operations();

	void printInfo();

	void addCar(Car&);

private:

vector <Car*> m_cars;

};

#endif /* OPERATIONS_H_ */
