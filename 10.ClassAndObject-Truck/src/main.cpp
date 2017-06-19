//============================================================================
// Name        : ClassAndObject-Truck.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Truck.h"

using namespace std;

int main() {

	Truck myTruck;
	string choice = "0";

	while (true){

		myTruck.showMenu();

		getline(cin,choice);

		myTruck.setChoice(choice);
	}

	return 0;
}
