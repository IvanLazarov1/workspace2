/*
 * Trapezoid.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: asdf
 */

#include "Trapezoid.h"

using namespace std;

Trapezoid::Trapezoid(int a, int b, string color, int h): Shape(a,b,color) {

	setH(h);

}

Trapezoid::~Trapezoid() {
	// Auto-generated destructor stub
}

int Trapezoid::getH() const {
	return h;
}

void Trapezoid::print() {
	cout << getA();
	cout << getB();
	cout << getColor();
	cout << getH();
}

void Trapezoid::setH(int h) {
	this->h = h;
}
