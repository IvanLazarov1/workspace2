/*
 * Employee.h
 *
 *  Created on: Apr 6, 2017
 *      Author: asdf
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>
using namespace std;

class Employee {

private:

	string m_firstName;
	string m_lastName;
	double m_monthlySalary;

public:

	Employee(string firstName = "", string lastName = "", double monthlySalary = 0);

	virtual ~Employee();

	string getFirstName();
	string getLastName();
	double getMonthlySalary();
	double getYearlySalary();
	double getBonus();

	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setMonthlySalary(double monthlySalary);
	void showInfo();




};



#endif /* EMPLOYEE_H_ */
