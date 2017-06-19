//============================================================================
// Name        : ClassAndObject-Student.cpp
// Author      : ty
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

int main() {

	string firstName;
	string lastName;
	int egn;
	int course;
	string speciality;

	Student st1("", "", 0, 0, "");

	cout << "Enter student first name : ";
	cin >> firstName;
	cout << "Enter student last name : ";
	cin >> lastName;
	do{
	cout << "Enter student EGN : ";
	cin >> egn;
	}while(egn <= 0);
	cout << "Enter student course : ";
	cin >> course;
	cout << "Enter student speciality : ";
	cin >> speciality;

	st1.setFirstName(firstName);
	st1.setLastName(lastName);
	st1.setEgn(egn);
	st1.setCourse(course);
	st1.setSpeciality(speciality);

	st1.showInfo();
	st1.showProgress();

	return 0;
}
