/*
 * Truck.h
 *
 *  Created on: Apr 4, 2017
 *      Author: asdf
 */

#ifndef TRUCK_H_
#define TRUCK_H_

#include <iostream>
#include <string>
using namespace std;


class Truck {
public:

	Truck();
	virtual ~Truck();

	void setBrand();
	void setKilometers();
	void setLoad();
	void setFuelConsumption();

	string getBrand();
	size_t getKilometers();
	size_t getLoad();
	size_t getFuelConsumption();

	void showMenu();
	void setChoice(string);
	void showInfo();
	void showError();
	bool isInputCorrect(string);

private:
	string m_brand;
	size_t m_kilometers;
	size_t m_load;
	size_t m_fuelConsumption;

};

#endif /* TRUCK_H_ */
