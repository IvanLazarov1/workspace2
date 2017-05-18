/*
 * Pizza.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: asdf
 */

#include "Pizza.h"

using namespace std;

Pizza::Pizza(string name, size_t price) {

	setName(name);
	setPrice(price);

}

Pizza::~Pizza() {
	// Auto-generated destructor stub
}

string Pizza::getName() {
	return m_name;
}

void Pizza::setName(string name) {
	m_name = name;
}

size_t Pizza::getPrice(){
	return m_price;
}

void Pizza::setPrice(size_t price) {
	m_price = price;
}
