//============================================================================
// Name        : Pointers.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a = 99;

	int *aPtr;

	aPtr = &a;

	cout << *aPtr << endl;
	cout << a << endl;

	a = 94;
	cout << *aPtr << endl;

	*aPtr = 55;

	cout << a << endl;
	cout << aPtr << endl;
	cout << &aPtr << endl;
	cout << &a << endl;
	cout << &*aPtr << endl;
	cout << *&aPtr << endl;



	return 0;
}
