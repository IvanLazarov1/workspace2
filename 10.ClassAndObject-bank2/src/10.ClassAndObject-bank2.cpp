//============================================================================
// Name        : ClassAndObject-bank2.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Account.h"

using namespace std;

int main() {

	int money = 0;

	cout << "Enter money for account 1 : ";
	cin >> money;
	Account acc1(money);

	money = 0;

	cout << "Enter money for account 2 : ";
	cin >> money;
	Account acc2(money);

	money = 0;
	cout << "Add money to account 1 : ";
	cin >> money;

	acc1.addBalance(money);

	cout << "Balance is : " << acc1.getBalance() <<endl;

	money = 0;
	cout << "Withdraw money from account 2 : ";
	cin >> money;

	acc2.withDraw(money);
	cout << "Current balance for account 2 is :" << acc2.getBalance();




	return 0;
}
