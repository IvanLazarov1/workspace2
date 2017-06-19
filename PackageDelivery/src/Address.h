#ifndef ADDRESS_H_
#define ADDRESS_H_

#include <iostream>
#include <string>

using namespace std;


class Address {

	friend ostream& operator << (ostream&, const Address&);
	friend istream& operator >> (istream&, Address&);

public:


	Address(string street = "", string city = "", string country = "", int zipCode = 0);
	virtual ~Address();

	const string& getCity() const;
	void setCity(const string& city);

	const string& getCountry() const;
	void setCountry(const string& country);

	const string& getStreet() const;
	void setStreet(const string& street);

	int getZipCode() const;
	void setZipCode(int zipCode);

	void print();

private:

	string m_street;
	string m_city;
	string m_country;
	int m_zipCode;

};


#endif /* ADDRESS_H_ */
