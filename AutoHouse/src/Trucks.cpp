/*
 * Trucks.cpp
 *
 *  Created on: May 16, 2017
 *      Author: asdf
 */

#include "Trucks.h"

using namespace std;

Trucks::Trucks(string brand, string model, string color, int partNumber, double price) {

	setPartNumber(partNumber);
	setPrice(price);

}

Trucks::~Trucks() {
	//Auto-generated destructor stub
}

int Trucks::getPartNumber() const {
	return m_partNumber;
}

void Trucks::setPartNumber(int partNumber) {
	m_partNumber = partNumber;
}

double Trucks::getPrice() const {
	return m_price;
}

void Trucks::setPrice(double price) {
	m_price = price;
}

void Trucks::printInfo() {
}
