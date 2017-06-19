#include "Medicaments.h"
#include "Maker.h"
#include <iostream>
using namespace std;

Medicaments::Medicaments() {

	setName("");
	setType("");
	setPrice(0);
	setQuantity(0);

}

Medicaments::Medicaments(string name, string type, double price, int quantity, Maker maker): m_maker(maker) {

	setName(name);
	setType(type);
	setPrice(price);
	setQuantity(quantity);

}

Medicaments::~Medicaments() {
	//Auto-generated destructor stub
}

const string& Medicaments::getName() const {
	return m_name;
}

void Medicaments::setName(const string& name) {
	m_name = name;
}

double Medicaments::getPrice() const {
	return m_price;
}

void Medicaments::setPrice(double price) {
	m_price = price;
}

int Medicaments::getQuantity() const {
	return m_quantity;
}

void Medicaments::setQuantity(int quantity) {
	m_quantity = quantity;
}

const string& Medicaments::getType() const {
	return m_type;
}

void Medicaments::setType(const string& type) {
	m_type = type;
}

void Medicaments::print() {

	cout << "Medicament name : " << getName() << endl;
	cout << "Medicament type : " << getType() << endl;
	cout << "Medicament price : " << getPrice() << endl;
	cout << "Medicament Quantity : " << getQuantity() << endl;

}
