/*
 * Items.cpp
 *
 *  Created on: Jun 13, 2017
 *      Author: asdf
 */

#include "Items.h"

using namespace std;

Items::Items(string name, int id, double price, int quantity) {
	m_name = name;
	m_id = id;
	m_price = price;
	m_quantity = quantity;
}

Items::~Items() {
	// Auto-generated destructor stub
}

int Items::getId() const {
	return m_id;
}

void Items::setId(int id) {
	m_id = id;
}

const string& Items::getName() const {
	return m_name;
}

void Items::setName(const string& name) {
	m_name = name;
}

double Items::getPrice() const {
	return m_price;
}

void Items::setPrice(double price) {
	m_price = price;
}

int Items::getQuantity() const {
	return m_quantity;
}

vector<Items> Items::readXMLFile(string fileName)
{
	pugi::xml_document doc;

	if (!doc.load_file(fileName.c_str()))
			cerr << "No such file";

	pugi::xml_node itemNode = doc.child("Catalog");

	Items temp;

		for (pugi::xml_node it = itemNode.first_child(); it; it = it.next_sibling())
		{
			temp.setName(it.child("name").text().as_string());
			temp.setPrice(it.child("price").text().as_double());
			temp.setQuantity(it.child("quantity").text().as_int());
			temp.setId(it.child("name").first_attribute().as_int());

			itemsVector.push_back(temp);
		}
		return itemsVector;
}

void Items::setQuantity(int quantity) {
	m_quantity = quantity;
}
