/*
 * SavingsAccount.cpp
 *
 *  Created on: Apr 25, 2017
 *      Author: asdf
 */

#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(){

}

SavingsAccount::SavingsAccount(double savingsBalance, double annualInterestRate) {

	this->savingsBalance = savingsBalance;
	this->annualInterestRate = annualInterestRate;

}

SavingsAccount::~SavingsAccount() {
	// Auto-generated destructor stub
}


double SavingsAccount::getSavingsBalance() const {
	return savingsBalance;
}

void SavingsAccount::setSavingsBalance(double savingsBalance) {
	this->savingsBalance = savingsBalance;
}

double SavingsAccount::getAnnualInterestRate() const {
	return annualInterestRate;
}

void SavingsAccount::setAnnualInterestRate(double annualInterestRate) {
	this->annualInterestRate = annualInterestRate;
}

double SavingsAccount::calculateMonthlyInterest(){
	return savingsBalance += (savingsBalance * annualInterestRate) / 12;
}
