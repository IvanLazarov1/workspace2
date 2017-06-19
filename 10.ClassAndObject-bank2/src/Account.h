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

	Account(int balance = 0);

	virtual ~Account();
//	����������� �� �������
void addBalance(int money);
void withDraw(int money);
int getBalance();

private:
//	����������� �� �������

	int m_balance;

};



#endif /* ACCOUNT_H_ */
