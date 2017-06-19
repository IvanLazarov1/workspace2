//============================================================================
// Name        : Functions2-Exercise1.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include "Header.h"
#include "Header2.h"

using namespace test;

void Exercise1();
void Exercise2();

int main() {

//	Exercise1();
	Exercise2();

	return 0;
}

void Exercise1()
{
	double x1 = 2.4;
	double x2 = 1.3;
	double y1 = 3.2;
	double y2 = 5.6;

	std::cout << distance(x1, y1, x2, y2);
}

void Exercise2()
{
	double pesho = 2;
	std::cout << test1(pesho);
}
