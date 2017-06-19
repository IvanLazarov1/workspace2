#ifndef PACKAGE_H_
#define PACKAGE_H_

#include "Sender.h"
#include "Recipient.h"

using namespace std;

class Package {

public:

	Package(size_t id = 0, double weight = 0, double cost = 0);

	virtual ~Package();

	double getCost() const;
	void setCost(double cost);

	double getWeight() const;
	void setWeight(double weight);

	void print();

	size_t getId() const;
	void setId(size_t id);
	Recipient getRecipient();
	Sender getSender();
	void showInfo();

private:

	size_t m_id;
	double m_weight;
	double m_cost;
	Sender m_sender;
	Recipient m_recipient;



};


#endif /* PACKAGE_H_ */
