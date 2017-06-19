#ifndef TEACHER_H_
#define TEACHER_H_

#include <string>

using namespace std;

//За всеки преподавател (клас Преподавател) се пази - име, предмет, егн, стаж

class Teacher {

public:

	Teacher(string = "", string = "", string = "", size_t = 0, size_t = 0);
	virtual ~Teacher();

	string getFirstName();
	void setFirstName(string firstName);

	string getLastName();
	void setLastName(string lastName);

	string getSubject();
	void setSubject(string subject);

	size_t getEgn();
	void setEgn(size_t egn);

	size_t getInternship();
	void setInternship(size_t internship);

	void print();

private:

	string m_firstName;
	string m_lastName;
	string m_subject;
	size_t m_egn;
	size_t m_internship;

};



#endif /* TEACHER_H_ */
