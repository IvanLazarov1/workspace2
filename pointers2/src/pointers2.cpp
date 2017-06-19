//============================================================================
// Name        : pointers2.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	long value1 = 0;
	long value2 = 200000;

	long *longPtr;

	longPtr = &value2;
	value1 = *longPtr;

	cout << *longPtr << endl;
	cout << &longPtr << endl;
	cout << &value1 << endl;



	return 0;
}
