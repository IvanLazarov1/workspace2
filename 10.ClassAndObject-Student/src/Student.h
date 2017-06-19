/*
 * Student.h
 *
 *  Created on: Apr 6, 2017
 *      Author: asdf
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
using namespace std;

class Student {

private:

	string m_firstName;
	string m_lastName;
	int m_egn;
	int m_course;
	string m_speciality;


public:
//	Student();
	Student(string firstName = "", string lastName = "", int egn = 0, int course = 0, string speciality = "");

	virtual ~Student();

	string getFirstName();
	string getLastName();
	int getEgn();
	int getCourse();
	string getSpeciality();


	void setFirstName(string);
	void setLastName(string);
	void setEgn(int);
	void setCourse(int);
	void setSpeciality(string);
	void showInfo();
	float showProgress();





};



#endif /* STUDENT_H_ */
