/*
 * Shops.h
 *
 *  Created on: Jun 10, 2017
 *      Author: asdf
 */

#ifndef SHOPS_H_
#define SHOPS_H_

#include <string>
#include <vector>
#include <map>
#include "pugixml.hpp"
#include <iostream>

using namespace std;

class Shops {

public:

	Shops();
	virtual ~Shops();

	void loadXml1(string xmlPath);
	void loadXml2(string xmlPath);
	void loadXml3(string xmlPath);

	const string& getBrand() const;
	void setBrand(const string& brand);
	const string& getModel() const;
	void setModel(const string& model);
	const string& getName() const;
	void setName(const string& name);
	double getPrice() const;
	void setPrice(double price);
	int getSoldquantity() const;
	void setSoldquantity(int soldquantity);

private:

	string m_name;
	string m_brand;
	string m_model;
	int m_soldquantity;
	double m_price;
	vector<Shops> shopsVector;
};

#endif /* SHOPS_H_ */
