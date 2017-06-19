#ifndef ONLINECOURSE_H_
#define ONLINECOURSE_H_
#include "Course.h"
#include <iostream>
using namespace std;

class OnlineCourse : public Course {

public:

	OnlineCourse(string name = "", int number = 0, int duration = 0, double basePrice = 0.0, int type = 0, string hour = "");
	virtual ~OnlineCourse();

	void calculatePrice();

	const string& getHour() const;
	void setHour(const string& hour);

	int getType() const;
	void setType(int type);

	void printInfo();

private:

	int m_type;
	string m_hour;

};

#endif /* ONLINECOURSE_H_ */
