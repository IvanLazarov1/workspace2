/*
 * Account.cpp
 *
 *  Created on: Apr 5, 2017
 *      Author: asdf
 */

#include "Account.h"

using namespace std;

Account::Account() {
	//Auto-generated constructor stub

}

Account::~Account() {
	//Auto-generated destructor stub
}

Account::Account(int initionBalance) {
	if(initionBalance >= 0)
	balance = initionBalance;
	if (initionBalance < 0){

	}
}

void Account::credit(int amount) {
	balance = amount + balance;
}

void Account::debit(int amount) {
	if (amount > balance){
		cout << "Debit amount exceeded account balance" << endl;
	}else{
		balance = balance - amount;
	}
}

int Account::getBalance() const {
	return balance;
}
