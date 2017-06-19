/*
 * Rectangle.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: asdf
 */

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(int a, int b, string color): Shape(a,b,color) {

	setA(a);
	setB(b);
	setColor(color);

}

Rectangle::~Rectangle() {
	// Auto-generated destructor stub
}

void Rectangle::print() {

	cout << getA();
	cout << getB();
	cout << getColor();

}
