/*
 * Items.h
 *
 *  Created on: Jun 13, 2017
 *      Author: asdf
 */

#ifndef ITEMS_H_
#define ITEMS_H_

#include <string>
#include <vector>
#include "pugixml.hpp"
#include <iostream>

using namespace std;


class Items {
public:

	Items(string name = "", int id = 0, double price = 0, int quantity = 0);
	virtual ~Items();

	vector<Items> readXMLFile(string);

	int getId() const;
	void setId(int id);
	const string& getName() const;
	void setName(const string& name);
	double getPrice() const;
	void setPrice(double price);
	int getQuantity() const;
	void setQuantity(int quantity);

	vector<Items> itemsVector;
private:

	string m_name;
	int m_id;
	double m_price;
	int m_quantity;

};

#endif /* ITEMS_H_ */
