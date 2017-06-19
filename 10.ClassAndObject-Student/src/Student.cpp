/*
 * Student.cpp
 *
 *  Created on: Apr 6, 2017
 *      Author: asdf
 */

#include "Student.h"
#include <iostream>

using namespace std;

//Student::Student() {
//	m_firstName = "Ivan";
//	m_lastName = "Ivanov";
//	m_egn = 0;
//	m_course = 0;
//	m_speciality = "asdasdf";
//}

Student::Student(string firstName, string lastName, int egn, int course, string speciality) {
	m_firstName = firstName;
	m_lastName = lastName;
	m_egn = egn;
	m_course = course;
	m_speciality = speciality;
}

Student::~Student() {
	// Auto-generated destructor stub
}

	string Student::getFirstName(){
		return m_firstName;
	}
	string Student::getLastName(){
		return m_lastName;
	}
	int Student::getEgn(){
		return m_egn;
	}
	int Student::getCourse(){
		return m_course;
	}
	string Student::getSpeciality(){
		return m_speciality;
	}




	void Student::setFirstName(string firstName){
		m_firstName = firstName;
	}
	void Student::setLastName(string lastName){
		m_lastName = lastName;
	}
	void Student::setEgn(int egn){
		m_egn = egn;
	}
	void Student::setCourse(int course){
		m_course = course;
	}
	void Student::setSpeciality(string speciality){
		m_speciality = speciality;
	}

	void Student::showInfo(){
				cout << "Student first name is : " << m_firstName << endl;
				cout << "Student last name is : " << m_lastName << endl;
				cout << "Student EGN is : " << m_egn << endl;
				cout << "Student course is : " << m_course << endl;
				cout << "Student speciality is : " << m_speciality << endl;
}

float Student::showProgress() {

	float arrayProgress[5] = {6,4,6,5,6};
	float progress = 0;
	float sum = 0;

	for (int i = 0; i < 5; i++){
		progress += arrayProgress[i];

		}
	sum = progress / 5;
	cout << "Sreden uspeh : " << sum << endl;

}
