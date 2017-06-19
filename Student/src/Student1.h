/*
 * Student1.h
 *
 *  Created on: Apr 19, 2017
 *      Author: asdf
 */

#ifndef STUDENT1_H_
#define STUDENT1_H_
#include <string>
#include <iostream>
#include "Adress.h"
using namespace std;

class Student1 {
public:

	Student1(string, string, Adress&);
	virtual ~Student1();

	void setName(string);
	void setSpec(string);
	void setAdress(Adress);

	string getName();
	string getSpec();
	string getAdress();

	void print();

private:

	string name;
	string spec;
	Adress Adress;

};



#endif /* STUDENT1_H_ */
