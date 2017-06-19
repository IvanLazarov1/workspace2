#include "LuxuryCar.h"
#include <iostream>
using namespace std;

LuxuryCar::LuxuryCar(string brand, string model, string type, string color,
		string chassisNumber, string registrationNumber,
		double fuelConsumption, int luxuryTax, int luxuryDistance, int taxExtras)
		: Car (brand, model, type, color, chassisNumber, registrationNumber, fuelConsumption){

	setLuxuryTax(luxuryTax);
	setLuxuryDistance(luxuryDistance);
	setTaxExtras(taxExtras);

}

LuxuryCar::~LuxuryCar() {
	// Auto-generated destructor stub
}

int LuxuryCar::getLuxuryDistance() const {
	return m_luxuryDistance;
}

void LuxuryCar::setLuxuryDistance(int luxuryDistance) {
	m_luxuryDistance = luxuryDistance;
}

int LuxuryCar::getTaxExtras() const {
	return m_taxExtras;
}

void LuxuryCar::setTaxExtras(int taxExtras) {
	m_taxExtras = taxExtras;
}

int LuxuryCar::getLuxuryTax() const {
	return m_luxuryTax;
}

void LuxuryCar::setLuxuryTax(int luxuryTax) {
	m_luxuryTax = luxuryTax;
}

double LuxuryCar::getPrice(){

	if (m_luxuryDistance < 200){

		return (m_luxuryTax * 0.6) * m_taxExtras;

	}else{

		return (m_luxuryTax * 0.4) * m_taxExtras;

	}

}

void LuxuryCar::printInfo(){

	cout << getBrand() << endl;
	cout << getModel() << endl;
	cout << getType() << endl;
	cout << getColor() << endl;
	cout << getChassisNumber() << endl;
	cout << getRegistrationNumber() << endl;
	cout << getFuelConsumption() << endl;
	cout << getLuxuryTax() << endl;

}
