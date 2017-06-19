/*
 * Account.cpp
 *
 *  Created on: Apr 5, 2017
 *      Author: asdf
 */

#include "Account.h"

using namespace std;

Account::Account(int balance) {
//	Конструктор.
	if (balance < 0){

		m_balance = 0;
		cout << "Balance can not be < 0" << endl;
	}else{
		m_balance = balance;
	}

}

Account::~Account() {
	// Auto-generated destructor stub
}

void Account::addBalance(int money){
//	Функция
	m_balance += money;
}

void Account::withDraw(int money){
//	Функция
	if (money > m_balance){
		cout << "Not enough money" <<endl;
	}else{
		m_balance -= money;
	}

}

int Account::getBalance(){
	return m_balance;
}

