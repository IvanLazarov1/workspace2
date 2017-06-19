/*
 * Rectangle.h
 *
 *  Created on: Apr 21, 2017
 *      Author: asdf
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

using namespace std;


class Rectangle : public Shape {

public:

	Rectangle(int, int, string);
	virtual ~Rectangle();

	int calculatePerimeter();
	virtual void print();

};



#endif /* RECTANGLE_H_ */
