/*
 * Trapezoid.h
 *
 *  Created on: Apr 21, 2017
 *      Author: asdf
 */

#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

using namespace std;


class Trapezoid : public Shape {

public:

	Trapezoid(int, int, string, int);
	virtual ~Trapezoid();

	virtual void print();

	int getH() const;
	void setH(int h);

private:

	int h;

};



#endif /* TRAPEZOID_H_ */
