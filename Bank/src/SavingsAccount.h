#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

using namespace std;


class SavingsAccount {

public:

	SavingsAccount();
	SavingsAccount(double, double);
	virtual ~SavingsAccount();

	double getSavingsBalance() const;
	void setSavingsBalance(double savingsBalance);

	double getAnnualInterestRate() const;
	void setAnnualInterestRate(double annualInterestRate);

	double calculateMonthlyInterest();

private:


	double savingsBalance;
	double annualInterestRate;


};


#endif /* SAVINGSACCOUNT_H_ */
