#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include <vector>

using namespace std;

//За всеки студент (клас Студент) се пази - име, егн, масив/вектор от 10 оценки

class Student {

public:

	Student(string = "", string = "", size_t = 0);

	virtual ~Student();

	string getFirstName();
	void setFirstName(string firstName);

	string getLastName();
	void setLastName(string lastName);

	size_t getEgn();
	void setEgn(size_t egn);

	size_t getGrades(double);

	void addGrades(double grades);
	double getAverageSuccess();
	void print();

private:

	string m_firstName;
	string m_lastName;
	size_t m_egn;
	vector <double> m_grades;

};



#endif /* STUDENT_H_ */
