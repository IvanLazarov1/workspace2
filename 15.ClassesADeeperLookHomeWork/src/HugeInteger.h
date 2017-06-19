/*
 * HugeInteger.h
 *
 *  Created on: Apr 18, 2017
 *      Author: asdf
 */

#ifndef HUGEINTEGER_H_
#define HUGEINTEGER_H_

#include <iostream>

using namespace std;

static const int arraySize = 5;

class HugeInteger {
public:

	HugeInteger();

	virtual ~HugeInteger();

	void input();
	void output();
	void add(int, int);
	void substract(int, int);
	void multiply(int, int);
	void divide(int, int);
	void modulus(int, int);

	bool isEqualTo(int, int);
	bool isNotEqualTo(int, int);
	bool isGreaterThan(int, int);
	bool isLessThan(int, int);
	bool isGreaterThanOrEqualTo(int, int);
	bool isLessThanOrEqualTo(int, int);
	bool isZero(int);

private:

	int arrayIntegers[arraySize];

};

#endif /* HUGEINTEGER_H_ */
