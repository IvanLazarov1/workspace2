/*
 * Shape.h
 *
 *  Created on: Apr 21, 2017
 *      Author: asdf
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <string>

using namespace std;


class Shape {
public:

	Shape(int, int, string);
	virtual ~Shape();

	void print();

	int getA() const;
	void setA(int a);
	int getB() const;
	void setB(int b);
	const string& getColor() const;
	void setColor(const string& color);

private:

	int a;
	int b;
	string color;

};



#endif /* SHAPE_H_ */
