/*
 * HugeInteger.cpp
 *
 *  Created on: Apr 18, 2017
 *      Author: asdf
 */

#include "HugeInteger.h"

using namespace std;

HugeInteger::HugeInteger() {
	//Auto-generated constructor stub

}

HugeInteger::~HugeInteger() {
	//Auto-generated destructor stub
}

void HugeInteger::input() {

	for (int i = 0; i < arraySize; i++) {

		cout << "Enter numbers " << i + 1 << " of " << arraySize << " : ";
		cin >> arrayIntegers[i];

	}
}

void HugeInteger::output() {

	for (int i = 0; i < arraySize; i++) {

		cout << arrayIntegers[i];

	}
	cout << endl;
}

void HugeInteger::add(int i, int add){

	arrayIntegers[i] += add;

}

void HugeInteger::substract(int i, int substract){

	arrayIntegers[i] -= substract;

}

bool HugeInteger::isEqualTo(int i, int equal){

	return arrayIntegers[i] == equal;

}

bool HugeInteger::isNotEqualTo(int i, int equal){

	return arrayIntegers[i] != equal;

}

bool HugeInteger::isGreaterThan(int i, int greater){

	return arrayIntegers[i] > greater;

}

bool HugeInteger::isLessThan(int i, int less){

	return arrayIntegers[i] < less;

}

bool HugeInteger::isGreaterThanOrEqualTo(int i, int greater){

	return arrayIntegers[i] >= greater;

}

bool HugeInteger::isLessThanOrEqualTo(int i, int less){

	return arrayIntegers[i] <= less;

}

bool HugeInteger::isZero(int i){

	return arrayIntegers[i] == 0;

}

void HugeInteger::multiply(int i, int multiply){

	arrayIntegers[i] *= multiply;

}

void HugeInteger::divide(int i, int divide){

	arrayIntegers[i] /= divide;

}

void HugeInteger::modulus(int i, int modulus){

	arrayIntegers[i] %= modulus;

}
