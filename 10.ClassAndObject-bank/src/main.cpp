//============================================================================
// Name        : ClassAndObject-bank.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Account.h"
using namespace std;

int main() {

	Account account1(300);
	Account account2(460);

	account1.credit(200);
	cout << account1.getBalance() << endl;

	account2.debit(200);
	cout << account2.getBalance() << endl;

	return 0;
}
