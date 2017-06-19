//============================================================================
// Name        : ClassAndObject-Employee.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
//	Покажете годишната заплата
//	Дайте на всеки служител 10% увеличение
//	Покажете годишната заплата пак


	Employee emp1("", "", 0);
	Employee emp2("", "", 0);

	string firstName;
	string lastName;
	double monthlySalary;

	cout << "Enter first name of the employee : ";
	cin >> firstName;

	cout << "Enter last name of the employee : ";
	cin >> lastName;

	cout << "Enter monthly salary of the employee : ";
	cin >> monthlySalary;

	emp1.setFirstName(firstName);
	emp1.setLastName(lastName);
	emp1.setMonthlySalary(monthlySalary);

	emp1.showInfo();

	return 0;
}
