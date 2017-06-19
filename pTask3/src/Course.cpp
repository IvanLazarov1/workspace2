#include "Course.h"

using namespace std;

Course::Course(string name, int number, int duration, double basePrice) {

	setName(name);
	setNumber(number);
	setDuration(duration);
	setBasePrice(basePrice);

}

Course::~Course() {
	//Auto-generated destructor stub
}

double Course::getBasePrice() const {
	return m_basePrice;
}

void Course::setBasePrice(double basePrice) {
	m_basePrice = basePrice;
}

int Course::getDuration() const {
	return m_duration;
}

void Course::setDuration(int duration) {
	m_duration = duration;
}

const string& Course::getName() const {
	return m_name;
}

void Course::setName(const string& name) {
	m_name = name;
}

int Course::getNumber() const {
	return m_number;
}

void Course::setNumber(int number) {
	m_number = number;
}
