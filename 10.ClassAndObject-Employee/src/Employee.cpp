/*
 * Employee.cpp
 *
 *  Created on: Apr 6, 2017
 *      Author: asdf
 */

#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

Employee::Employee(string firstName, string lastName, double monthlySalary) {
	//Auto-generated constructor stub
	m_firstName = firstName;
	m_lastName = lastName;
	m_monthlySalary = monthlySalary;
}

Employee::~Employee() {
	//Auto-generated destructor stub
}

	string Employee::getFirstName(){
		return m_firstName;
	}

	string Employee::getLastName(){
		return m_lastName;
	}

	double Employee::getMonthlySalary(){
		return m_monthlySalary;
	}

	void Employee::setFirstName(string firstName){
		m_firstName = firstName;
	}

	void Employee::setLastName(string lastName){
		m_lastName = lastName;
	}

	void Employee::setMonthlySalary(double monthlySalary){
		m_monthlySalary = monthlySalary;
	}

	double Employee::getYearlySalary(){
		return m_monthlySalary * 12;
	}

	double Employee::getBonus(){
		return m_monthlySalary + m_monthlySalary;
	}

	void Employee::showInfo(){
		cout << "Employee first name is : " << getFirstName() << endl;
		cout << "Employee last name is : " << getLastName() << endl;
		cout << "Employee monthly salary is : " << getMonthlySalary() << endl;
		cout << "Employee yearly salary is : " << getYearlySalary() << endl;
	}
