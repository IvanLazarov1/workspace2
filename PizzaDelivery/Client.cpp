/*
 * Client.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: asdf
 */

#include "Client.h"


using namespace std;


Client::Client(string name) {

}

Client::~Client() {
	// TODO Auto-generated destructor stub
}

void Client::setName(string name) {
	m_name = name;

}

string Client::getName() {

	return m_name;
}

void Client::addAddress(string address) {

	m_addresses.push_back(address);

}

string Client::getAddress(size_t number) {
	return m_addresses.at(number);
}

void Client::removeAddress(size_t index) {

	m_addresses.erase(m_addresses.begin()+index);

}
