/*
 * Operations.h
 *
 *  Created on: May 16, 2017
 *      Author: asdf
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#include "Vehicle.h"

using namespace std;

class Operations : public Vehicle{

public:

	Operations();
	virtual ~Operations();

private:

	vector<Vehicle> m_vehicles;

};

extern Operations operation;

#endif /* OPERATIONS_H_ */
