/*
 * Triangle.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: asdf
 */

#include "Triangle.h"

using namespace std;

Triangle::Triangle(int a, int b, string color, int c): Shape(a,b,color) {
	setC(c);

}

Triangle::~Triangle() {
	// Auto-generated destructor stub
}

int Triangle::getC() const {
	return c;
}

void Triangle::print() {
	cout << getA();
	cout << getB();
	cout << getColor();
	cout << getC();
}

void Triangle::setC(int c) {
	this->c = c;
}
