/*
 * Adress.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: asdf
 */

#include "Adress.h"
#include <string>
using namespace std;



Adress::Adress(string town, string city, string street, int postCode) {

	setTown(town);
	setCity(city);
	setStreet(street);
	setPostCode(postCode);

}

Adress::~Adress() {
	// Auto-generated destructor stub
}

void Adress::setTown(string town){
		this->town = town;
}

void Adress::setCity(string city){
		this->city = city;
}

void Adress::setStreet(string street){
	this->street = street;
}

void Adress::setPostCode(int postCode){
	this->postCode = postCode;
}


	string Adress::getTown(){
		return town;
	}
	string Adress::getCity(){
		return city;
	}
	string Adress::getStreet(){
		return street;
	}
	int Adress::getPostCode(){
		return postCode;
	}

	void Adress::print(){

		cout << getTown();
		cout << getCity();
		cout << getStreet();
		cout << getPostCode();

	}
