/*
 * Motorcycles.h
 *
 *  Created on: May 16, 2017
 *      Author: asdf
 */

#ifndef MOTORCYCLES_H_
#define MOTORCYCLES_H_

#include "Vehicle.h"

using namespace std;


class Motorcycles : public Vehicle {

public:

	Motorcycles(string brand = "", string model = "", string color = "", int partNumber = 0, double price = 0.0);
	virtual ~Motorcycles();

	int getPartNumber() const;
	void setPartNumber(int partNumber);

	double getPrice() const;
	void setPrice(double price);

	void printInfo();

private:

	int m_partNumber;
	double m_price;

};


#endif /* MOTORCYCLES_H_ */
