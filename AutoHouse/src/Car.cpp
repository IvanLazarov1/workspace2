/*
 * Car.cpp
 *
 *  Created on: May 16, 2017
 *      Author: asdf
 */

#include "Car.h"

using namespace std;

Car::Car(string brand, string model, string color, int partNumber, double price) {

	setPartNumber(partNumber);
	setPrice(price);

}

Car::~Car() {
	//Auto-generated destructor stub
}

int Car::getPartNumber() const {
	return m_partNumber;
}

void Car::setPartNumber(int partNumber) {
	m_partNumber = partNumber;
}

double Car::getPrice() const {
	return m_price;
}

void Car::setPrice(double price) {
	m_price = price;
}

void Car::printInfo() {
}
