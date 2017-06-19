/*
 * Motorcycles.cpp
 *
 *  Created on: May 16, 2017
 *      Author: asdf
 */

#include "Motorcycles.h"

using namespace std;

Motorcycles::Motorcycles(string brand, string model, string color, int partNumber, double price) {

	setPartNumber(partNumber);
	setPrice(price);

}

Motorcycles::~Motorcycles() {
	//Auto-generated destructor stub
}

int Motorcycles::getPartNumber() const {
	return m_partNumber;
}

void Motorcycles::setPartNumber(int partNumber) {
	m_partNumber = partNumber;
}

double Motorcycles::getPrice() const {
	return m_price;
}

void Motorcycles::setPrice(double price) {
	m_price = price;
}

void Motorcycles::printInfo() {
}
