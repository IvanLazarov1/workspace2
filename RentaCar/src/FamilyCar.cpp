#include "FamilyCar.h"
#include <iostream>
using namespace std;

FamilyCar::FamilyCar(string brand, string model, string type, string color,
		string chassisNumber, string registrationNumber, double fuelConsumption,
		int familyTax, int familyDistance): Car (brand, model, type, color, chassisNumber, registrationNumber, fuelConsumption) {

	setFamilyTax(familyTax);
	setFamilyDistance(familyDistance);

}

FamilyCar::~FamilyCar() {
	// Auto-generated destructor stub
}

int FamilyCar::getFamilyDistance() const {
	return m_familyDistance;
}

void FamilyCar::setFamilyDistance(int familyDistance) {
	m_familyDistance = familyDistance;
}

int FamilyCar::getFamilyTax() const {
	return m_familyTax;
}

void FamilyCar::setFamilyTax(int familyTax) {
	m_familyTax = familyTax;
}

double FamilyCar::getPrice() {

	if (m_familyDistance < 500){

		return m_familyTax * 0.7;

	}else{

		return m_familyTax * 0.4;
	}

}

void FamilyCar::printInfo(){

	cout << getBrand() << endl;
	cout << getModel() << endl;
	cout << getType() << endl;
	cout << getColor() << endl;
	cout << getChassisNumber() << endl;
	cout << getRegistrationNumber() << endl;
	cout << getFuelConsumption() << endl;
	cout << getFamilyTax() << endl;

}
