#ifndef UNIVERSITY_H_
#define UNIVERSITY_H_

#include <vector>
#include "Teacher.h"
#include "Student.h"

using namespace std;


class University {

public:

	University();
	virtual ~University();

	void addStudents(string firstName = "", string lastName = "", size_t egn = 0);
	void removeStudents();

	void addTeachers(string firstName = "", string lastName = "", string subject = "", size_t egn = 0, size_t internship = 0);
	void removeTeachers();

	void searchStudent(string firstName = "", string lastName = "");
	void searchTeacher();

	size_t getTopStudents();

	void getFiveYearTeacher();
	void getThreeYearAndSubject(string subject);

	void addStudentGrade(string, string, double);


private:

	vector<Teacher> m_teachers;
	vector<Student> m_students;

};



#endif /* UNIVERSITY_H_ */
