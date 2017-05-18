//============================================================================
// Name        : PizzaDelivery.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Delivery.h"
using namespace std;

int main() {

	Delivery delivery1;

	delivery1.setName("Marieta");
	delivery1.addAddress("Liulin 8");
	delivery1.addAddress("Nadejda 2");

	cout << delivery1.getAddress(0) << endl;
	cout << delivery1.getAddress(1) << endl;

	delivery1.removeAddress(0);

	cout << delivery1.getAddress(0) << endl;

	delivery1.addPizza("Margarita" , 5);
	delivery1.addPizza("Mafiozo" , 10);
	delivery1.addPizza("Kalcone" , 15);

	cout << "Total price for delivery : " << delivery1.getTotalPrice();


	return 0;
}
