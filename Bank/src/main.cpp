#include <iostream>
#include "SavingsAccount.h"

using namespace std;

int main() {

	SavingsAccount saver1;
	SavingsAccount saver2;

	saver1.setAnnualInterestRate(0.12);
	saver2.setAnnualInterestRate(0.20);

	saver1.setSavingsBalance(2000);
	saver2.setSavingsBalance(3000);

	cout << "Saver1 monthly interest : " << saver1.calculateMonthlyInterest() << endl;
	cout << "Saver2 monthly interest : " << saver2.calculateMonthlyInterest() << endl;



	return 0;
}
