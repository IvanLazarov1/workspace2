#include <iostream>
#include "Package.h"

using namespace std;

Package::Package(size_t id, double weight, double cost) {

	setId(id);
	setWeight(weight);
	setCost(cost);

}

Package::~Package() {
	// Auto-generated destructor stub
}

double Package::getCost() const {
	return m_cost;
}

void Package::setCost(double cost) {
	m_cost = cost;
}

double Package::getWeight() const {
	return m_weight;
}

void Package::setWeight(double weight) {
	m_weight = weight;
}

void Package::print() {

	cout << "Package weight : " << getWeight() << endl;
	cout << "Package cost : " << getCost() << endl;

}

size_t Package::getId() const {
	return m_id;
}

void Package::setId(size_t id) {
	m_id = id;
}

Recipient Package::getRecipient() {
	return m_recipient;
}

Sender Package::getSender(){
	return m_sender;
}

void Package::showInfo() {

	cout << getId() << endl;
	cout << getWeight() << endl;
	cout << getCost() << endl;
	cout << getSender().getFirstName() << " " << getSender().getFirstName() <<endl;
//	cout << getSender().getAddress().print();
	cout << getRecipient().getFirstName() << " " << getSender().getLastName()<<endl;
//	getRecipient().getAddress().print();
}
