/*
 * Vehicle.cpp
 *
 *  Created on: May 16, 2017
 *      Author: asdf
 */

#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(string brand, string model, string color) {


	setBrand(brand);
	setModel(model);
	setColor(color);


}

Vehicle::~Vehicle() {
	// Auto-generated destructor stub
}



const string& Vehicle::getBrand() const {
	return m_brand;
}

void Vehicle::setBrand(const string& brand) {
	m_brand = brand;
}

const string& Vehicle::getColor() const {
	return m_color;
}

void Vehicle::setColor(const string& color) {
	m_color = color;
}

const string& Vehicle::getModel() const {
	return m_model;
}

void Vehicle::setModel(const string& model) {
	m_model = model;
}

void Vehicle::printInfo() {
}
