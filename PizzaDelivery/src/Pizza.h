/*
 * Pizza.h
 *
 *  Created on: Apr 20, 2017
 *      Author: asdf
 */

#ifndef PIZZA_H_
#define PIZZA_H_

#include <string>
#include <vector>

using namespace std;

class Pizza {

public:

	Pizza(string name = "", size_t price = 0);
	virtual ~Pizza();

	string getName();
	void setName(string);
	size_t getPrice();
	void setPrice(size_t);

private:

	string m_name;
	size_t m_price;

};



#endif /* PIZZA_H_ */
