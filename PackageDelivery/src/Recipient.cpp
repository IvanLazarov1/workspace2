#include "Recipient.h"

using namespace std;

Recipient::Recipient(string firstName, string lastName){

	setFirstName(firstName);
	setLastName(lastName);

}

Recipient::~Recipient() {
	// Auto-generated destructor stub
}

Address Recipient::getAddress()  {
	return m_address;
}

const string& Recipient::getFirstName() const {
	return m_firstName;
}

void Recipient::setFirstName(const string& firstName) {
	m_firstName = firstName;
}

const string& Recipient::getLastName() const {
	return m_lastName;
}

void Recipient::setLastName(const string& lastName) {
	m_lastName = lastName;
}
