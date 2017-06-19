//============================================================================
// Name        : ClassesADeeperLockHomeWork.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "HugeInteger.h"
using namespace std;

int main() {

	HugeInteger object1;

	object1.input();
	object1.output();

	object1.add(0,5);
	object1.output();

	object1.substract(0, 5);
	object1.output();

//	object1.isEqualTo(5, 6);
//	object1.output();

//	object1.isNotEqualTo(2, 5);
//	object1.output();

//	object1.isGreaterThan(2, 3);
//	object1.output();

//	object1.isLessThan(4, 3);
//	object1.output();

//	object1.isGreaterThanOrEqualTo(2, 3);
//	object1.output();

//	object1.isLessThanOrEqualTo(4, 3);
//	object1.output();

//	object1.isZero(0);
//	object1.output();

//	object1.multiply(2, 2);
//	object1.output();

//	object1.divide(2, 3);
//	object1.output();



	return 0;
}
