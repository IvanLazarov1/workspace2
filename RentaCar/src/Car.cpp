#include "Car.h"

using namespace std;

Car::Car(string brand, string model, string type, string color, string chassisNumber, string registrationNumber, double fuelConsumption) {

	setBrand(brand);
	setModel(model);
	setType(type);
	setColor(color);
	setChassisNumber(chassisNumber);
	setRegistrationNumber(registrationNumber);
	setFuelConsumption(fuelConsumption);

}

Car::~Car() {
	// Auto-generated destructor stub
}

string Car::getBrand() const {
	return m_brand;
}

void Car::setBrand(string brand) {
	m_brand = brand;
}

string Car::getChassisNumber() const {
	return m_chassisNumber;
}

void Car::setChassisNumber(string chassisNumber) {
	m_chassisNumber = chassisNumber;
}

string Car::getColor() const {
	return m_color;
}

void Car::setColor(string color) {
	m_color = color;
}

double Car::getFuelConsumption() const {
	return m_fuelConsumption;
}

void Car::setFuelConsumption(double fuelConsumption) {
	m_fuelConsumption = fuelConsumption;
}

string Car::getModel() const {
	return m_model;
}

void Car::setModel(string model) {
	m_model = model;
}

string Car::getRegistrationNumber() const {
	return m_registrationNumber;
}

void Car::setRegistrationNumber(string registrationNumber) {
	m_registrationNumber = registrationNumber;
}

string Car::getType() const {
	return m_type;
}

void Car::setType(string type) {
	m_type = type;
}
