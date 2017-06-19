/*
 * Adress.h
 *
 *  Created on: Apr 19, 2017
 *      Author: asdf
 */

#ifndef ADRESS_H_
#define ADRESS_H_

#include <string>
#include <iostream>

using namespace std;

/*
 *
 */
class Adress {
public:

	Adress(string, string, string, int);
	virtual ~Adress();

	void setTown(string);
	void setCity(string);
	void setStreet(string);
	void setPostCode(int);

	string getTown();
	string getCity();
	string getStreet();
	int getPostCode();

	void print();


private:

	string town;
	string city;
	string street;
	int postCode;

};



#endif /* ADRESS_H_ */
