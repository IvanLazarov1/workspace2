/*
 * Student.cpp
 *
 *  Created on: Apr 22, 2017
 *      Author: asdf
 */
#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(string firstName, string lastName, size_t egn) {

	setFirstName(firstName);
	setLastName(lastName);
	setEgn(egn);


}

Student::~Student() {
	// Auto-generated destructor stub
}

size_t Student::getEgn() {
	return m_egn;
}

void Student::setEgn(size_t egn) {
	m_egn = egn;
}

string Student::getFirstName() {
	return m_firstName;
}

void Student::setFirstName(string firstName) {
	m_firstName = firstName;
}


string Student::getLastName() {
	return m_lastName;
}

void Student::setLastName(string lastName) {
	m_lastName = lastName;
}

size_t Student::getGrades(double grades){
	return m_grades.at(grades);
}

void Student::addGrades(double grades){
	m_grades.push_back(grades);
}

double Student::getAverageSuccess() {

	double average = 0;

	for (size_t i = 0; i < m_grades.size(); i++){
		average += m_grades.at(i);
	}
	return average / m_grades.size();
}

void Student::print(){

	cout << "Student info : " << endl;
	cout << getFirstName() << endl;
	cout << getLastName() << endl;
	cout << getEgn() << endl;

	for (size_t i = 0; i < m_grades.size(); i++)
	{
		cout << getGrades(i) << endl;
	}
}
