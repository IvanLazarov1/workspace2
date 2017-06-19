//============================================================================
// Name        : ClassAndObject-Car.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Car1.h"

using namespace std;

int main()
{
	string brand;
	string model;
	string color;
	size_t year;
	size_t kilometers;
	size_t price;


	cout << "Enter brand : ";
	cin >> brand;
	cout << "Enter model : ";
	cin >> model;
	cout << "Enter color : ";
	cin >> color;
	cout << "Enter year : ";
	cin >> year;
	cout << "Enter kilometers : ";
	cin >> kilometers;
	cout << "Enter price : ";
	cin >> price;


	Car1 myCar(brand, model, color, year, kilometers, price);

	myCar.showInfo();

	return 0;
}
