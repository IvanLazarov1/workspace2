/*
 * Shape.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: asdf
 */

#include "Shape.h"
#include <iostream>

using namespace std;

Shape::Shape(int a, int b, string color) {

	setA(a);
	setB(b);
	setColor(color);


}

Shape::~Shape() {
	// Auto-generated destructor stub
}

int Shape::getA() const {
	return a;
}

void Shape::setA(int a) {
	this->a = a;
}

int Shape::getB() const {
	return b;
}

void Shape::setB(int b) {
	this->b = b;
}

const string& Shape::getColor() const {
	return color;
}

void Shape::print() {
	cout << getA() << endl;
	cout << getB() << endl;
	cout << getColor() << endl;
}

void Shape::setColor(const string& color) {
	this->color = color;
}

