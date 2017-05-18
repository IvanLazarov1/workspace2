#include "Address.h"
#include <iomanip>
#include <iostream>
using namespace std;


Address::Address(string street, string city, string country, int zipCode) {

	setStreet(street);
	setCity(city);
	setCountry(country);
	setZipCode(zipCode);

}

Address::~Address() {
	// Auto-generated destructor stub
}



const string& Address::getCity() const {
	return m_city;
}

void Address::setCity(const string& city) {
	m_city = city;
}

const string& Address::getCountry() const {
	return m_country;
}

void Address::setCountry(const string& country) {
	m_country = country;
}

const string& Address::getStreet() const {
	return m_street;
}

void Address::setStreet(const string& street) {
	m_street = street;
}

int Address::getZipCode() const {
	return m_zipCode;
}

void Address::setZipCode(int zipCode) {
	m_zipCode = zipCode;
}

void Address::print(){

	cout << getStreet() << endl;
	cout << getCity() << endl;
	cout << getCountry() << endl;
	cout << getZipCode() << endl;

}

istream& operator >> (istream& input, Address& addr){
	// 1000 BG - Sofia : Mladost

	input >> setw(4) >> addr.m_zipCode; // 1000
	input.ignore(1); // " "
	input >> setw(2) >> addr.m_country; // BG
	input.ignore(3); // " - "
	input >> setw(3) >> addr.m_city;
	input.ignore(3); // " : "
	input >> setw(10) >> addr.m_street;

	return input;
}

ostream& operator << (ostream& output, const Address& addr){
	// Sof : BG : 1000 - Mladost

	output << addr.m_city << " : " << addr.m_country << " : " << addr.m_zipCode << " - " << addr.m_street;

	return output;
}
