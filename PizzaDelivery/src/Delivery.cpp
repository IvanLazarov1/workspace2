/*
 * Delivery.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: asdf
 */

#include "Delivery.h"

using namespace std;

Delivery::Delivery() {

	m_totalPrice = 0;

}

Delivery::~Delivery() {
	// Auto-generated destructor stub
}

void Delivery::addPizza(string name, size_t price) {

	Pizza temp(name, price);
	m_pizzas.push_back(temp);

}

size_t Delivery::getTotalPrice() {

	for (size_t i = 0; i < m_pizzas.size(); i++ ){

		m_totalPrice += m_pizzas.at(i).getPrice();

	}

	return m_totalPrice;
}
