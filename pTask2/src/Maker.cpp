#include "Maker.h"

using namespace std;

Maker::Maker(string name, int code, string country) {

	setName(name);
	setCode(code);
	setCountry(country);

}

Maker::~Maker() {
	// Auto-generated destructor stub
}

int Maker::getCode() const {
	return m_code;
}

void Maker::setCode(int code) {
	m_code = code;
}

const string& Maker::getCountry() const {
	return m_country;
}

void Maker::setCountry(const string& country) {
	m_country = country;
}

const string& Maker::getName() const {
	return m_name;
}

void Maker::setName(const string& name) {
	m_name = name;
}
