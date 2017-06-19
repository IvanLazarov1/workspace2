/*
 * Trucks.h
 *
 *  Created on: May 16, 2017
 *      Author: asdf
 */

#ifndef TRUCKS_H_
#define TRUCKS_H_

#include "Vehicle.h"

using namespace std;

class Trucks : public Vehicle {

public:

	Trucks(string brand = "", string model = "", string color = "", int partNumber = 0, double price = 0.0);
	virtual ~Trucks();

	int getPartNumber() const;
	void setPartNumber(int partNumber);

	double getPrice() const;
	void setPrice(double price);

	void printInfo();

private:

	int m_partNumber;
	double m_price;

};


#endif /* TRUCKS_H_ */
