/*
 * Triangle.h
 *
 *  Created on: Apr 21, 2017
 *      Author: asdf
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"

using namespace std;


class Triangle : public Shape {

public:

	Triangle(int, int, string, int);
	virtual ~Triangle();

	virtual void print();

	int getC() const;
	void setC(int c);

private:

	int c;

};



#endif /* TRIANGLE_H_ */
