/*
 * Operations.h
 *
 *  Created on: May 24, 2017
 *      Author: asdf
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#include <iostream>
#include "pugixml.hpp"
#include "BookStore.h"
#include <string>
#include <vector>

using namespace std;

class Operations {

public:

	Operations();
	virtual ~Operations();

	void readFromXmlFile();
	void modify();
	void WriteNewXmlFile();


};

extern Operations operation;

#endif /* OPERATIONS_H_ */
