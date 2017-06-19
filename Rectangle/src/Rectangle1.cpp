/*
 * Rectangle1.cpp
 *
 *  Created on: Apr 18, 2017
 *      Author: asdf
 */

#include "Rectangle1.h"
#include <cmath>

using namespace std;

Rectangle1::Rectangle1(int x1,int x2,int x3 ,int x4,int y1,int y2,int y3,int y4) {
	setRectangle(x1, x2, x3, x4, y1, y2, y3, y4);

}

void Rectangle1::setRectangle(int x1,int x2,int x3 ,int x4,int y1,int y2,int y3,int y4){

	this->x1 = (x1 > 0 && x1 < 20) ? x1 : 0;
	this->x2 = (x2 > 0 && x2 < 20) ? x2 : 0;
	this->x3 = (x3 > 0 && x3 < 20) ? x3 : 0;
	this->x4 = (x4 > 0 && x4 < 20) ? x4 : 0;

	this->y1 = (y1 > 0 && y1 < 20) ? y1 : 0;
	this->y2 = (y2 > 0 && y2 < 20) ? y2 : 0;
	this->y3 = (y3 > 0 && y3 < 20) ? y3 : 0;
	this->y4 = (y4 > 0 && y4 < 20) ? y4 : 0;

}

int Rectangle1::calculateLenght(){

	return abs(x2 - x1);

}

int Rectangle1::calculateWidth(){

	return abs(y3 - y1);

}

int Rectangle1::perimeter(){

	return 2 * (calculateLenght() + calculateWidth());

}

int Rectangle1::area(){

	return (calculateLenght() * calculateWidth());

}

Rectangle1::~Rectangle1() {
	//Auto-generated destructor stub
}


