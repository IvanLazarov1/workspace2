/*
 * Client.h
 *
 *  Created on: Apr 20, 2017
 *      Author: asdf
 */

#ifndef CLIENT_H_
#define CLIENT_H_

#include <string>
#include <vector>

using namespace std;


class Client {

public:

	Client(string name = "");
	virtual ~Client();

	void setName(string);
	string getName();
	void addAddress(string);
	string getAddress(size_t);
	void removeAddress(size_t);


private:

	string m_name;
	vector<string> m_addresses;

};



#endif /* CLIENT_H_ */
