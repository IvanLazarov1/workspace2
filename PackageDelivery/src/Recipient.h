#ifndef RECIPIENT_H_
#define RECIPIENT_H_

#include "Address.h"

#include <string>

using namespace std;


class Recipient {

public:

	Recipient(string firstName = "", string lastName = "");
	virtual ~Recipient();

	Address getAddress();

	const string& getFirstName() const;
	void setFirstName(const string& firstName);

	const string& getLastName() const;
	void setLastName(const string& lastName);

private:

	string m_firstName;
	string m_lastName;
	Address m_address;

};


#endif /* RECIPIENT_H_ */
