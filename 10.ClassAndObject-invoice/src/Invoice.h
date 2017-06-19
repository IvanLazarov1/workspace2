/*
 * invoice.h
 *
 *  Created on: Apr 5, 2017
 *      Author: asdf
 */

#ifndef INVOICE_H_
#define INVOICE_H_

#include <string>
using namespace std;

class Invoice {
public:



	Invoice(string partNumber = "", string partDescription  = "", int quantiti = 0, float price = 0);
	virtual ~Invoice();

	string getPartNumber();
	string getPartDescription();
	int getQuantity();
	float getPrice();
	float getInvoiceAmmount();
	string getInfo();

	void setPartNumber(string);
	void setPartDescription(string);
	void setQuantity(int);
	void setPrice(float);



private:

	string m_partNumber;
	string m_partDescription;
	int m_quantity;
	float m_price;


};



#endif /* INVOICE_H_ */
