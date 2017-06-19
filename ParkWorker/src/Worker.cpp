/*
 * Worker.cpp
 *
 *  Created on: May 1, 2017
 *      Author: asdf
 */

#include "Worker.h"

using namespace std;

Worker::Worker(string firstName, string secondName, string lastName, size_t egn,
		string address, size_t phone, string gender) {

	m_firstName = firstName;
	m_secondName = secondName;
	m_lastName = lastName;
	m_egn = egn;
	m_address = address;
	m_phone = phone;
	m_gender = gender;

}

Worker::~Worker() {
	// Auto-generated destructor stub
}

const string& Worker::getAddress() const {
	return m_address;
}

void Worker::setAddress(const string& address) {
	m_address = address;
}

size_t Worker::getEgn() const {
	return m_egn;
}

void Worker::setEgn(size_t egn) {
	m_egn = egn;
}

const string& Worker::getFirstName() const {
	return m_firstName;
}

void Worker::setFirstName(const string& firstName) {
	m_firstName = firstName;
}

const string& Worker::getGender() const {
	return m_gender;
}

void Worker::setGender(const string& gender) {
	m_gender = gender;
}

const string& Worker::getLastName() const {
	return m_lastName;
}

void Worker::setLastName(const string& lastName) {
	m_lastName = lastName;
}

size_t Worker::getPhone() const {
	return m_phone;
}

void Worker::setPhone(size_t phone) {
	m_phone = phone;
}

const string& Worker::getSecondName() const {
	return m_secondName;
}

void Worker::setSecondName(const string& secondName) {
	m_secondName = secondName;
}
