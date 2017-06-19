#include "Sender.h"

using namespace std;

Sender::Sender(string firstName, string lastName) {

	setFirstName(firstName);
	setLastName(lastName);

}

Sender::~Sender() {
	// Auto-generated destructor stub
}

void Sender::invoice() {

}

Address Sender::getAddress(){
	return m_address;
}

const string& Sender::getFirstName() const {
	return m_firstName;
}

void Sender::setFirstName(const string& firstName) {
	m_firstName = firstName;
}

const string& Sender::getLastName() const {
	return m_lastName;
}

void Sender::setLastName(const string& lastName) {
	m_lastName = lastName;
}
