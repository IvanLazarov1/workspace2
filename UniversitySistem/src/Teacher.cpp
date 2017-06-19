#include <iostream>
#include "Teacher.h"

using namespace std;

Teacher::Teacher(string firstName, string lastName, string subject, size_t egn, size_t internship)  {

	setFirstName(firstName);
	setLastName(lastName);
	setSubject(subject);
	setEgn(egn);
	setInternship(internship);

}

Teacher::~Teacher() {
	// Auto-generated destructor stub
}

string Teacher::getFirstName() {
	return m_firstName;
}

void Teacher::setFirstName(string firstName) {
	m_firstName = firstName;
}

string Teacher::getLastName() {
	return m_lastName;
}

void Teacher::setLastName(string lastName) {
	m_lastName = lastName;
}

string Teacher::getSubject() {
	return m_subject;
}

void Teacher::setSubject(string subject) {
	m_subject = subject;
}

size_t Teacher::getEgn() {
	return m_egn;
}

void Teacher::setEgn(size_t egn) {
	m_egn = egn;
}

size_t Teacher::getInternship() {
	return m_internship;
}

void Teacher::setInternship(size_t internship) {
	m_internship = internship;
}

void Teacher::print(){

	cout << "Teacher info : " << endl;
	cout << getFirstName() << endl;
	cout << getLastName() << endl;
	cout << getSubject() << endl;
	cout << getEgn() << endl;
	cout << getInternship() << endl;

}


