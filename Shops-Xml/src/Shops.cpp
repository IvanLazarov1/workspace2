/*
 * Shops.cpp
 *
 *  Created on: Jun 10, 2017
 *      Author: asdf
 */

#include "Shops.h"

using namespace std;

Shops::Shops() {
	// Auto-generated constructor stub

}

Shops::~Shops() {
	// Auto-generated destructor stub
}

void Shops::loadXml1(string xmlPath)
{
	pugi::xml_document doc;

	if (!doc.load_file(xmlPath.c_str()))
		cerr << "No such file";

	pugi::xml_node shopsNode = doc.child("shop1");

	Shops shop1;
	for (pugi::xml_node child = shopsNode.first_child(); child; child = child.next_sibling())
	{
		shop1.setName(child.child("name").text().as_string());
		shop1.setBrand(child.child("brand").text().as_string());
		shop1.setModel(child.child("model").text().as_string());
		shop1.setSoldquantity(child.child("soldquantity").text().as_int());
		shop1.setPrice(child.child("price").text().as_double());
		shopsVector.push_back(shop1);
	}
}

void Shops::loadXml2(string xmlPath)
{
	pugi::xml_document doc;

	if (!doc.load_file(xmlPath.c_str()))
		cerr << "No such file";

	pugi::xml_node shopsNode = doc.child("shop1");

	Shops shop2;
	for (pugi::xml_node child = shopsNode.first_child(); child; child = child.next_sibling())
	{
		shop2.setName(child.child("name").text().as_string());
		shop2.setBrand(child.child("brand").text().as_string());
		shop2.setModel(child.child("model").text().as_string());
		shop2.setSoldquantity(child.child("soldquantity").text().as_int());
		shop2.setPrice(child.child("price").text().as_double());
		shopsVector.push_back(shop2);
	}
}

void Shops::loadXml3(string xmlPath)
{
	pugi::xml_document doc;

	if (!doc.load_file(xmlPath.c_str()))
		cerr << "No such file";

	pugi::xml_node shopsNode = doc.child("shop1");

	Shops shop3;
	for (pugi::xml_node child = shopsNode.first_child(); child; child = child.next_sibling())
	{
		shop3.setName(child.child("name").text().as_string());
		shop3.setBrand(child.child("brand").text().as_string());
		shop3.setModel(child.child("model").text().as_string());
		shop3.setSoldquantity(child.child("soldquantity").text().as_int());
		shop3.setPrice(child.child("price").text().as_double());
		shopsVector.push_back(shop3);
	}
}

const string& Shops::getBrand() const {
	return m_brand;
}

void Shops::setBrand(const string& brand) {
	m_brand = brand;
}

const string& Shops::getModel() const {
	return m_model;
}

void Shops::setModel(const string& model) {
	m_model = model;
}

const string& Shops::getName() const {
	return m_name;
}

void Shops::setName(const string& name) {
	m_name = name;
}

double Shops::getPrice() const {
	return m_price;
}

void Shops::setPrice(double price) {
	m_price = price;
}

int Shops::getSoldquantity() const {
	return m_soldquantity;
}

void Shops::setSoldquantity(int soldquantity) {
	m_soldquantity = soldquantity;
}
