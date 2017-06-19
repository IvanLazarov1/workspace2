/*
 * Car.h
 *
 *  Created on: May 16, 2017
 *      Author: asdf
 */

#ifndef CAR_H_
#define CAR_H_

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle{

public:

	Car(string brand = "", string model = "", string color = "", int partNumber = 0, double price = 0.0);
	virtual ~Car();

	int getPartNumber() const;
	void setPartNumber(int partNumber);

	double getPrice() const;
	void setPrice(double price);

	void printInfo();

private:

	int m_partNumber;
	double m_price;

};

#endif /* CAR_H_ */
