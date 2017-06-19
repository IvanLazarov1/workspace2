/*
 * Invoice.cpp
 *
 *  Created on: Apr 5, 2017
 *      Author: asdf
 */

#include "Invoice.h"

using namespace std;

Invoice::Invoice(string partNumber,string partDescription, int quantity,float price) {
	m_partNumber = partNumber;
	m_partDescription = partDescription;
	m_quantity = quantity;
	m_price = price;

}

Invoice::~Invoice() {
	// Auto-generated destructor stub
}

string Invoice::getPartNumber(){
	return m_partNumber;
}
string Invoice::getPartDescription(){
	return m_partDescription;
}
int Invoice::getQuantity(){
	return m_quantity;
}
float Invoice::getPrice(){
	return m_price;
}
string Invoice::getInfo(){
		return m_partNumber + " " + m_partDescription;
	}
	void Invoice::setPartNumber(string partNumber){
		m_partNumber = partNumber;
	}
	void Invoice::setPartDescription(string partDescription){
		m_partDescription = partDescription;
	}
	void Invoice::setQuantity(int quantity){
		m_quantity = quantity;
	}
	void Invoice::setPrice(float price){
		m_price = price;
	}
	float Invoice::getInvoiceAmmount(){
		return m_quantity * m_price;
	}

