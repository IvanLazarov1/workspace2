//============================================================================
// Name        : Rectangle.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Rectangle1.h"
using namespace std;

int main() {

	Rectangle1 rect1(2, 12, 2, 12, 2, 2, 16, 16);
	cout << rect1.area() << endl;

	Rectangle1 &rectRef = rect1;
	cout << rectRef.perimeter() << endl;

	Rectangle1 *rectPtr = &rect1;
	cout << rectPtr->calculateLenght() << endl;

	Rectangle1 rect2(2, 12, 2, 12, 2, 2, 18, 18);
	Rectangle1 rect3(2, 14, 2, 14, 2, 2, 18, 18);

	Rectangle1 arrRect[3] = {rect1, rect2, rect3};
	Rectangle1 *arrRectPtr[3];

	arrRectPtr[0] = &rect1;
	arrRectPtr[1] = &rect2;
	arrRectPtr[3] = &rect3;

	for (int i = 0; i < 2; i++){
		cout << arrRectPtr[i] ->area();
	}


	return 0;
}
