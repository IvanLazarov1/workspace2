#ifndef COURSE_H_
#define COURSE_H_

#include <string>

using namespace std;

class Course {

public:

	Course(string name = "", int number = 0, int duration = 0, double basePrice = 0.0);
	virtual ~Course();

	double getBasePrice() const;
	void setBasePrice(double basePrice);

	int getDuration() const;
	void setDuration(int duration);

	const string& getName() const;
	void setName(const string& name);

	int getNumber() const;
	void setNumber(int number);

	virtual void printInfo() = 0;

private:

	string m_name;
	int m_number;
	int m_duration;
	double m_basePrice;

};

#endif /* COURSE_H_ */
