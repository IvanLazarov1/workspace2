#include "OfficeCourse.h"
#include <iostream>

using namespace std;

OfficeCourse::OfficeCourse(string name, int number, int duration, double basePrice,
		int level, string address, int hall, int type) {

	setLevel(level);
	setAddress(address);
	setHall(hall);
	setType(type);

}

OfficeCourse::~OfficeCourse() {
	//Auto-generated destructor stub
}

const string& OfficeCourse::getAddress() const {
	return m_address;
}

void OfficeCourse::setAddress(const string& address) {
	m_address = address;
}

int OfficeCourse::getHall() const {
	return m_hall;
}

void OfficeCourse::setHall(int hall) {
	m_hall = hall;
}

int OfficeCourse::getLevel() const {
	return m_level;
}

void OfficeCourse::setLevel(int level) {
	m_level = level;
}

int OfficeCourse::getType() const {
	return m_type;
}

void OfficeCourse::setType(int type) {
	m_type = type;
}

void OfficeCourse::calculatePrice() {

}

void OfficeCourse::printInfo() {

	cout << "Course name : " <<  getName() << endl;
	cout << "Course number : " <<  getNumber() << endl;
	cout << "Course duration : " <<  getDuration() << endl;
	cout << "Course base price : " <<  getBasePrice() << endl;
	cout << "Course level : " <<  getLevel() << endl;
	cout << "Course address : " <<  getAddress() << endl;
	cout << "Course hall : " <<  getHall() << endl;
	cout << "Course type : " <<  getType() << endl;

}
