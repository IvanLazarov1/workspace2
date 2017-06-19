/*
 * Car1.h
 *
 *  Created on: Apr 4, 2017
 *      Author: asdf
 */

#ifndef CAR1_H_
#define CAR1_H_

#include <iostream>
#include <string>

using namespace std;

class Car1 {

public:

	Car1(string = "", string = "", string = "",
	size_t = 0, size_t = 0, size_t = 0);
	virtual ~Car1();

	void setBrand(string);
	void setModel(string);
	void setColor(string);
	void setYear(size_t);
	void setKilometers(size_t);
	void setPrice(size_t);
	void setFuelConsumption(float fuelConsumption);

	string getBrand();
	string getModel();
	string getColor();
	size_t getYear();
	size_t getKilometers();
	size_t getPrice();


	void showInfo();



private:

	string m_brand;
	string m_model;
	string m_color;
	size_t m_year;
	size_t m_kilometers;
	size_t m_price;

};

#endif /* CAR1_H_ */
