#ifndef SENDER_H_
#define SENDER_H_

#include <string>
#include "Address.h"

using namespace std;


class Sender {


public:

	Sender(string firstName = "", string lastName = "");
	virtual ~Sender();

	void invoice();

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


#endif /* SENDER_H_ */
