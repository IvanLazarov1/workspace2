#ifndef MEDICAMENTS_H_
#define MEDICAMENTS_H_

#include "Maker.h"
#include <string>
using namespace std;


class Medicaments {

public:

	Medicaments();
	Medicaments(string name, string type, double price, int m_quantity, Maker maker);
	virtual ~Medicaments();

	const string& getName() const;
	void setName(const string& name);

	double getPrice() const;
	void setPrice(double price);

	int getQuantity() const;
	void setQuantity(int quantity);

	const string& getType() const;
	void setType(const string& type);

	void print();

private:

	string m_name;
	string m_type;
	double m_price;
	int m_quantity;
	Maker m_maker;

};



#endif /* MEDICAMENTS_H_ */
