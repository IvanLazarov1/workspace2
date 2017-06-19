/*
 * Account.h
 *
 *  Created on: Apr 5, 2017
 *      Author: asdf
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
using namespace std;

class Account {

public:

	Account();
	virtual ~Account();
	Account(int initionBalance);

	void credit(int amount);
	void debit(int amount);
	int getBalance() const;

private:

	int balance;
};



#endif /* ACCOUNT_H_ */
