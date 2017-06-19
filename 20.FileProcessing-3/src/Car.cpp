#include "Car.h"

using namespace std;

Car::Car(int partNumber, string brand, string model, string chassisNumber, int kilometers, double fuelConsumtion, double price) {

	setPartNumber(partNumber);
	setBrand(brand);
	setModel(model);
	setChassisNumber(chassisNumber);
	setKilometers(kilometers);
	setFuelConsumtion(fuelConsumtion);
	setPrice(price);

}

Car::~Car() {
	//Auto-generated destructor stub
}


const string& Car::getBrand() const {
	return m_brand;
}

void Car::setBrand(const string& brand) {
	m_brand = brand;
}

const string& Car::getChassisNumber() const {
	return m_chassisNumber;
}

void Car::setChassisNumber(const string& chassisNumber) {
	m_chassisNumber = chassisNumber;
}

double Car::getFuelConsumtion() const {
	return m_fuelConsumtion;
}

void Car::setFuelConsumtion(double fuelConsumtion) {
	m_fuelConsumtion = fuelConsumtion;
}

int Car::getKilometers() const {
	return m_kilometers;
}

void Car::setKilometers(int kilometers) {
	m_kilometers = kilometers;
}

const string& Car::getModel() const {
	return m_model;
}

void Car::setModel(const string& model) {
	m_model = model;
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
