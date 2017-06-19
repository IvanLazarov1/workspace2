/*
 * Delivery.h
 *
 *  Created on: Apr 20, 2017
 *      Author: asdf
 */

#ifndef DELIVERY_H_
#define DELIVERY_H_

#include <vector>
#include "Pizza.h"
#include "Client.h"

using namespace std;

class Delivery : public Client {

public:

	Delivery();
	virtual ~Delivery();
	void addPizza(string, size_t);
	size_t getTotalPrice();






private:

	vector <Pizza> m_pizzas;
	size_t m_totalPrice;

};



#endif /* DELIVERY_H_ */
