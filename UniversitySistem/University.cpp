/*
 * University.cpp
 *
 *  Created on: Apr 22, 2017
 *      Author: asdf
 */

#include "University.h"
#include <iostream>

using namespace std;

University::University() {

}

University::~University() {
	// TODO Auto-generated destructor stub
}


void University::addStudents(string firstName, string lastName, size_t egn){

	for (size_t i = 0; i < m_students.size(); i++){
		if (m_students.at(i).getEgn() == egn)
		{
			cout << "This EGN is used" << endl;
			return;
		}
	}

	Student temp(firstName, lastName, egn);
	m_students.push_back(temp);
}

void University::removeStudents(){

}

void University::addTeachers(string firstName, string lastName, string subject, size_t egn, size_t internship){


	for (size_t i = 0; i < m_teachers.size(); i++){
		if (m_teachers.at(i).getEgn() == egn){
			cout << "This EGN is used" << endl;
			return;

		}

	}

	Teacher temp(firstName, lastName, subject, egn, internship);
	m_teachers.push_back(temp);

}

void University::removeTeachers(){

}

void University::searchStudent(string firstName, string lastName){

	for (size_t i = 0; i < m_students.size(); i++){

		if (m_students.at(i).getFirstName() == firstName && m_students.at(i).getLastName() == lastName){

			m_students.at(i).print();

		}
	}
}

void University::searchTeacher(){

}

size_t University::getTopStudents() {

	size_t counter = 0;

	for (size_t i = 0; i < m_students.size(); i++){

		if (m_students.at(i).getAverageSuccess() >= 5){
			counter++;
		}

	}

	return counter;
}

void University::getFiveYearTeacher() {

	for (size_t i = 0; i < m_teachers.size(); i++){

		if (m_teachers.at(i).getInternship() > 5){

			m_teachers.at(i).print();

		}
	}

}

void University::getThreeYearAndSubject(string subject) {

	for (size_t i = 0; i < m_teachers.size(); i++){

			if (m_teachers.at(i).getInternship() > 3 && m_teachers.at(i).getSubject() == subject){

				m_teachers.at(i).print();

			}
		}
}

void University::addStudentGrade(string firstName, string lastName, double grade) {


	for (size_t i = 0; i < m_students.size(); i++){

		if (m_students.at(i).getFirstName() == firstName && m_students.at(i).getLastName() == lastName){

					m_students.at(i).addGrades(grade);
				}

		}

}
