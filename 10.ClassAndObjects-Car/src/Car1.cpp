/*
 * Car1.cpp
 *
 *  Created on: Apr 4, 2017
 *      Author: asdf
 */

#include "Car1.h"

Car1::Car1(string brand, string model, string color,
		   size_t year, size_t kilometers, size_t price) :

		   m_brand( brand ), m_model( model ), m_color(color),
		   m_year(year), m_kilometers(kilometers), m_price(price)
{

}

Car1::~Car1() {
	// Auto-generated destructor stub
}

string Car1::getBrand(){
	return m_brand;
}

string Car1::getModel(){
	return m_model;
}
string Car1::getColor(){
	return m_color;
}
size_t Car1::getYear(){
	return m_year;
}
size_t Car1::getKilometers(){
	return m_kilometers;
}
size_t Car1::getPrice(){
	return m_price;
}


void Car1::setBrand(string brand){
	m_brand = brand;
}
void Car1::setModel(string model){
	m_model = model;
}
void Car1::setColor(string color){
	m_color = color;
}
void Car1::setYear(size_t year){
	m_year = year;
}
void Car1::setKilometers(size_t kilometers){
	m_kilometers = kilometers;
}
void Car1::setPrice(size_t price){
	m_price = price;
}







//Car1::Car1(string m_brand, string m_model, string m_color,
//		size_t m_year, size_t m_kilometers,
//		size_t m_price) {
//}

void Car1::showInfo(){
	cout << "Car brand is : " << m_brand << endl;
	cout << "Car model is : " << m_model << endl;
	cout << "Car color is : " << m_color << endl;
	cout << "Car year is : " << m_year << endl;
	cout << "Car kilometers is : " << m_kilometers << endl;
	cout << "Car price is : " << m_price << endl;


}


