//============================================================================
// Name        : CarParking.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double parking(double);

int main() {

	double time = 0;
	cin >> time;

	parking(time);


	return 0;
}

double parking(double time){

	double charge;
	double oneHour = 0.50;

	if (time <= 3 && time > 0){
		charge = 2.00;

	}
	return charge;
}
